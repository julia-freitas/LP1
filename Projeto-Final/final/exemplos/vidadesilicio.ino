//Vida de Silício
//Felipe Gbur

#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9
#define LED_R 2//LED Vermelho
#define LED_G 3 //LED Verde
char st[20];

MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup()
{
  Serial.begin(9600);
  SPI.begin();
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
  if ( ! mfrc522.PICC_IsNewCardPresent())
  {
    return;
  }
  // Seleciona um catão a ser lido
  if ( ! mfrc522.PICC_ReadCardSerial())
  {
    return;
  }
  //Mostra ID na serial
  Serial.print("ID da tag:");
  String conteudo = "";
  byte letra;
  for (byte i = 0; i < mfrc522.uid.size; i++)
  {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    conteudo.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    conteudo.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Mensagem : ");
  conteudo.toUpperCase();

  if (conteudo.substring(1) == "D6 35 19 7E") //ID CARTÃO
  {
    Serial.println("Acesso autorizado !");
    Serial.println();
    digitalWrite (LED_G, HIGH);
    digitalWrite (LED_R, LOW);
    delay(5000);//Delay apagar LED Verde
    digitalWrite (LED_G, LOW);
    digitalWrite (LED_R, HIGH);
  }
}

void acende_led()
{
  digitalWrite (LED_G, HIGH);
  digitalWrite (LED_R, LOW);
  delay(2000);
  digitalWrite (LED_G, LOW);
  digitalWrite (LED_R, HIGH);
}

// muda o estado do usuario - recebe a posicao da eeprom
void muda_estado(int id)
{
  if (EEPROM[id] == 0)
  {
    EEPROM.update(EEPROM[id], 1);
    users[id].estado = 1;
  }
  else
  {
    EEPROM.update(EEPROM[id], 0);
    users[id].estado = 0;
  }
}


void limpa_eeprom()
{
  for (int i = 0; i < EEPROM.length(); i++)
  {
    EEPROM.update(i, 0);
  }
}


void imprime_eeprom()
{
  Serial.println("EEPROM: ");
  for (int i = 0; i < EEPROM.length(); i++)
  {
    Serial.print(EEPROM[i]);
    Serial.print(" |");
  }
  Serial.println(' ');
  Serial.println(' ');
}

void acende_led()
{
  digitalWrite (LED_G, HIGH);
  digitalWrite (LED_R, LOW);
  delay(2000);
  digitalWrite (LED_G, LOW);
  digitalWrite (LED_R, HIGH);
}
