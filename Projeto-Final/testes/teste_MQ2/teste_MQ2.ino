// UTILIZEI FUNCOES E PONTEIROS 

// utilizei a funcao map() para limitar os valores de leitura entre 0 e 1023

#define sensor_gas A0 

//prototipos de funcao
float le_sensor(float* );
void imprime_valor(float *);
void imprime_percent(float *);

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  float leitura;
  float percent;
  percent = le_sensor(&leitura);
  imprime_valor(&leitura);
  imprime_percent(&percent);
  delay(500);
}

// funcao que faz leitura analogica do sensor para a variavel leitura - recebe end da variavel leitura - retorna a porcentagem do valor lido
float le_sensor(float* leit)
{
  *(leit) = analogRead(sensor_gas);
  float sensor_percent = map( (*leit), 0, 1023, 0, 100 ); //faz a conversao da variavel para porcentagem
  return sensor_percent;
}

// funcao que imprime o valor lido - recebe end da variavel leitura - retorna vazio
void imprime_valor(float* leit)
{
  Serial.print("valor do sensor: ");
  Serial.println(*leit);
}

// funcao que imprime a porcentagem do valor lido - recebe end da variavel percent - retorna vazio
void imprime_percent(float* sensor_percent)
{
  Serial.print("valor percent: ");
  Serial.println(*sensor_percent);
}

