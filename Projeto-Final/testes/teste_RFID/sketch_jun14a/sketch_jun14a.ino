#include <SPI.h>
#include <MFRC522.h>
 
#define SS_PIN 10
#define RST_PIN 9
#define LED_R 2//LED Vermelho
#define LED_G 3 //LED Verde
#define CARTAO 57 BB 3F 0C
#define TAG E2 9D 9D 2E

char st[20];

// prototipos de funcao 
MFRC522 mfrc522(SS_PIN, RST_PIN);
void imprime_cartao();
void acende_led();
 
void setup()
{
  Serial.begin(9600);
  SPI.begin();
  // Inicia MFRC522    
  mfrc522.PCD_Init();
  Serial.println("Aproxime o seu cartao/TAG do leitor");
  Serial.println();
  pinMode(LED_R, 2);
  pinMode(LED_G, 3);
}
 
void loop()
{
  digitalWrite (LED_G, LOW);
  digitalWrite (LED_R, HIGH);
 
  // Busca novos cartões 
  // inserida dentro de um laço de repetição, faz com que o modulo fique buscando por um novo cartão a ser lido
  if ( ! mfrc522.PICC_IsNewCardPresent())
  {
    return;
  }
  // Seleciona um cartão a ser lido
  // ler a TAG ou cartão que foi encontrado anteriormente.
  if ( ! mfrc522.PICC_ReadCardSerial())
  {
    return;
  }

  imprime_cartao();
}


void acende_led()
{
  digitalWrite (LED_G, HIGH);
  digitalWrite (LED_R, LOW);
  delay(5000);
  digitalWrite (LED_G, LOW);
  digitalWrite (LED_R, HIGH);
}

void imprime_cartao()
{
  String conteudo = "";
  byte letra;
  
  //Mostra ID na serial
  Serial.print("ID da tag:");
  
  for (byte i = 0; i < mfrc522.uid.size; i++)
  {
    // se o indice for menor que 0x10, imprime 0, senão, imprime vazio
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    conteudo.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    conteudo.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Bem-vindo!");
  Serial.println();
  conteudo.toUpperCase();
 
  if ( (conteudo.substring(1) == "CARTAO") || (conteudo.substring(1) == "TAG") )//ID CARTÃO
  {
    Serial.println("Acesso autorizado !");
    Serial.println();
    acende_led();
  }
}

