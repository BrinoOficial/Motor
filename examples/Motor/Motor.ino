/* criado por Mateus Terra
 * em 18/12/2015
 * 
 * Código de exemplo da biblioteca de controle do driver de motor
 * L293B ou L293D com foco em movimentação do robôs.
 * 
 * 
 * 
 */


#include <Motor.h>

#define pinoVelocidadeL 3
#define pinoVelocidadeR 5
#define motorL1 2
#define motorL2 4
#define motorR2 6
#define motorR1 7

Motor motor(pinoVelocidadeL, pinoVelocidadeR, motorL1, motorL2, motorR1, motorR2);

void setup()
{
  //não é necessária nenhuma configuração
}

void loop()
{
  motor.frente(180);//rotacione os motores para frente com
                  // a mesma velocidade
  delay(2000);
  motor.direita(180,180); // vire para a direita com velocidades
                  // iguais na esquerda e direita
  delay(2000);
  motor.parar(); // pare os motores
  delay(2000);
  motor.tras(180,180); // rotacione os motores para tras com
                  // controle individual da velocidade
  delay(2000);
  motor.esquerda(180,180); // vire para a esquerda com velocidades
                  //iguais em ambos os motores
  delay(2000);
}

