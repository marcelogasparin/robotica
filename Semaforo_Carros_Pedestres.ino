/************************************************************/
/* Projeto - Semáforo de Carros e Pedestres                 */
/* Programação de um semáforo para carros e pedestres.      */
/************************************************************/
/* Definições dos pinos para cada um dos LEDs.              */
int led_vermelho_ped = 3;
int led_verde_ped = 4;
int led_vermelho_car = 5;
int led_amarelo_car = 6;
int led_verde_car = 7;
/* Função para as configurações da programação.             */
void setup() {
  /* Define os pinos dos LEDs como saída.                   */
  pinMode(led_vermelho_ped, OUTPUT);
  pinMode(led_verde_ped, OUTPUT);
  pinMode(led_vermelho_car, OUTPUT);
  pinMode(led_amarelo_car, OUTPUT);
  pinMode(led_verde_car, OUTPUT);
}
/* Bloco Principal: Execução das ações do programa.         */
void loop() {
  /* Liga o vermelho dos pedestres.                         */
  digitalWrite(led_vermelho_ped, 1);
  /* Liga o verde dos carros.                               */
  digitalWrite(led_verde_car, 1);
  /* Aguarda 5 segundos.                                    */
  delay(5000);
  /* Liga o amarelo dos carros.                             */
  digitalWrite(led_amarelo_car, 1);
  /* Desliga o verde dos carros.                            */
  digitalWrite(led_verde_car, 0);
  /* Aguarda 1 segundo.                                     */
  delay(1000);
  /* Liga o vermelho dos carros.                            */
  digitalWrite(led_vermelho_car, 1);
  /* Desliga o amarelo dos carros.                          */
  digitalWrite(led_amarelo_car, 0);
  /* Desliga o vermelho dos pedestres.                      */
  digitalWrite(led_vermelho_ped, 0);
  /* Liga o verde dos pedestres.                            */
  digitalWrite(led_verde_ped, 1);
  /* Aguarda 5 segundo.                                     */
  delay(5000);
  /* Desliga o verde dos pedestres.                         */
  digitalWrite(led_verde_ped, 0);
  /* Contagem para o LED Vermelho piscar 5 vezes.           */
  for (int count = 0; count < 5; count++) {
    /* Liga o LED vermelho dos pedestres.                   */
    digitalWrite(led_vermelho_ped, 1);
    /* Aguarda 0,25 segundos.                               */
    delay(250);
    /* Desliga o LED vermelho dos pedestres.                */
    digitalWrite(led_vermelho_ped, 0);
    /* Aguarda 0,25 segundos.                               */
    delay(250);
  }
  /* Desliga o vermelho dos carros.                         */
  digitalWrite(led_vermelho_car, 0);
}
