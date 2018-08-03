#include <SPI.h>
//#include <require_cpp11.h>
#include <MFRC522.h>
#include <EEPROM.h>

#define SS_PIN 10
#define RST_PIN 9
#define LED_R 2//LED Vermelho
#define LED_G 3 //LED Verde

#define TAM 2
// CARTAO 57 BB 3F 0C
// TAG E2 9D 9D 2E


int posicao = 0;
int numpessoas = 0;

struct posmesa
{
  int x;
  int y;
};

struct usuario
{
  int id; // identifica a pessoa - posicao da eeprom
  int estado; // 1 - dentro da sala / 0 - fora da sala // estado armazenado na memoria flash - retirar do usuario - deixar somente na eeprom
  struct posmesa mesa;
  String tag;
};

struct usuario users[TAM]; // guarda a struct dos usuarios a cada posicao do array

// prototipos de funcao
MFRC522 mfrc522(SS_PIN, RST_PIN);

void imprimeByte(byte* endloc);
void escreveByte(int );
void add_usuario(int , int , String);
void acende_led(); // TO-DO : FAZER A FUNCAO PARA RECEBER OS PARAMETROS: PINO DO LED E ESTADO, comparando o estado atual com o estado a ser alterado
int valida_cartao(); // funcao para leitura do cartao
void muda_estado();// funcao para mudar estado do usuario: fora ou dentro

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);

  
  SPI.begin();
  // Inicia MFRC522    
  mfrc522.PCD_Init();
  Serial.println("Aproxime o seu cartao/TAG do leitor");
  Serial.println();
  pinMode(LED_R, 2);
  pinMode(LED_G, 3);

  // cria o prim usuario, na pos[0] do vetor, preenchendo nos campos: x = 50, y = 37, associado ao cartao  57 BB 3F 0C
  add_usuario(50, 37, "57 BB 3F 0C"); 
  add_usuario(40, 27, "E2 9D 9D 2E");
}


void loop() 
{
  
  digitalWrite (LED_G, LOW);
  digitalWrite (LED_R, HIGH);
 
  // Busca novos cartões 
  // inserida dentro de um laço de repetição, faz com que o modulo fique buscando por um novo cartão a ser lido
  if ( ! mfrc522.PICC_IsNewCardPresent())
  {
    //Serial.println("nao achei o cartao");
    return;
  }
  
  // Seleciona um cartão a ser lido
  // ler a TAG ou cartão que foi encontrado anteriormente.
  if ( ! mfrc522.PICC_ReadCardSerial())
  {
    return;
  }
  
  // checa se o cartao esta cadastrado
  int indice = valida_cartao();

  // encontra o usuario na memoria - retorna a posicao da eeprom referente ao id do usuario
  
  Serial.println("posicao: ");
  Serial.print(indice);
  Serial.println();
  
  Serial.println();
  Serial.print("estado antes: ");
  Serial.println(users[indice].estado);
  Serial.println();

  // cartao foi aceito - a pessoa esta cadastrada - muda o estado gravado na eeprom
  if (indice >= 0)
  {
    Serial.println();
    if (users[indice].estado == 0)
      Serial.print("Bem-vindo!");

    else
      Serial.print("Tchau!");

    Serial.println();
    Serial.println();
    
    muda_estado(indice);
  }

  Serial.print("posicao: ");
  Serial.print(indice);
  Serial.println();
  
  Serial.println();
  Serial.print("estado depois: ");
  Serial.println(users[indice].estado);

  delay(2000);

}

// cria usuario, na pos[id] do vetor, no campo x = posx, y = posy, associado ao num do cartao
void add_usuario(int posx, int posy, String tag)
{
    int id = numpessoas;
    
    numpessoas++;
    
    int est = 0;

    EEPROM.update(id, 0);

    users[id].mesa.x = posx;
    users[id].mesa.y = posy;
    users[id].tag = tag;
}


void acende_led()
{
  digitalWrite (LED_G, HIGH);
  digitalWrite (LED_R, LOW);
  delay(2000);
  digitalWrite (LED_G, LOW);
  digitalWrite (LED_R, HIGH);
}


int valida_cartao()
{
  String conteudo = "";
  byte letra;
  

  // conversao do valor do cartao
  for (byte i = 0; i < mfrc522.uid.size; i++)
  {
    conteudo.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    conteudo.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  
  conteudo.toUpperCase();

  for (int i = 0; i < TAM; i++)
  {
    if (users[i].tag ==  conteudo.substring(1))
    {
        Serial.println("achei usuario na posicao ");
        Serial.print(i);
        return i;
    }
  }
    
   return -1;

}

// muda o estado do usuario - recebe a posicao da eeprom
void muda_estado(int id)
{
  if (users[id].estado == 0)
  {
    EEPROM.update(users[id].estado, 1);
    users[id].estado = 1;
  }
  else
  {
    EEPROM.update(users[id].estado, 0);
    users[id].estado = 0;
  }
}



