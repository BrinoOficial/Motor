#include "Arduino.h"
#include "Motor.h"

Motor::Motor(int inhL, int inhR, int act1L, int act2L, int act1R, int act2R){
	_inhL=inhL;
	_inhR=inhR;
	_act1L=act1L;
	_act1R=act1R;
	_act2L=act2L;
	_act2R=act2R;
}
void Motor::frente(int speed){
	if(speed<=1023){
		int speedA;		
 		analogWrite(_inhL, speed );
  		analogWrite(_inhR, speed+10 );
  		digitalWrite(_act1L, HIGH);
  		digitalWrite(_act2L, LOW);
  		digitalWrite(_act1R, HIGH);
  		digitalWrite(_act2R, LOW);
		for(int t = 0; t < 150; t++){
			speedA = speed+pow(2.7, 0.005199*(0-t))*270*cos(3.14*3*t/400);
			analogWrite(_inhL, speedA);
  			analogWrite(_inhR, speedA+10);
			delay(1);
		}
		analogWrite(_inhL, speed);
  		analogWrite(_inhR, speed+10);
	}
}
void Motor::tras(int speed){
	if(speed<=1023){		
 		int speedA;		
 		analogWrite(_inhL, speed );
  		analogWrite(_inhR, speed+10 );
  		digitalWrite(_act1L, LOW);
  		digitalWrite(_act2L, HIGH);
  		digitalWrite(_act1R, LOW);
  		digitalWrite(_act2R, HIGH);
		for(int t = 0; t < 120; t++){
			speedA = speed+pow(2.7, 0.005199*(0-t))*350*cos(3.14*3*t/400);
			analogWrite(_inhL, speedA);
  			analogWrite(_inhR, speedA+10);
			delay(1);
		}
		analogWrite(_inhL, speed);
  		analogWrite(_inhR, speed+10);
	}
}
void Motor::direita(int speedL, int speedR){
	if(speedL<1023 && speedR<1023){
		int speedA;
		int speedB;
     
		analogWrite(_inhL, speedL);
  		analogWrite(_inhR, speedR+10);
     
		digitalWrite(_act1L, HIGH);
  		digitalWrite(_act2L, LOW); 
  		digitalWrite(_act1R, LOW); 		
  		digitalWrite(_act2R, HIGH);
  		
		for(int t = 0; t < 120; t++){
			speedA = speedL+pow(2.7, 0.005199*(0-t))*400*cos(3.14*3*t/400);
			speedB = speedR+pow(2.7, 0.005199*(0-t))*450*cos(3.14*3*t/400);
			analogWrite(_inhL, speedA);
  			analogWrite(_inhR, speedB+10);
			delay(1);
		}
		
		
  		analogWrite(_inhL, speedL);
  		analogWrite(_inhR, speedR+10);
		
		delay(100);

	}
}
void Motor::esquerda(int speedL, int speedR){
	if(speedR<1023 && speedL<1023){
  		int speedA;
		int speedB;
		analogWrite(_inhL, speedL);
  		analogWrite(_inhR, speedR+10);
     		digitalWrite(_act1L, LOW);
  		digitalWrite(_act2L, HIGH); 
  		digitalWrite(_act1R, HIGH); 		
  		digitalWrite(_act2R, LOW); 
		
		for(int t = 0; t < 120; t++){
			speedA = speedL+pow(2.7, 0.005199*(0-t))*450*cos(3.14*3*t/400);
			speedB = speedR+pow(2.7, 0.005199*(0-t))*400*cos(3.14*3*t/400);
			analogWrite(_inhL, speedA);
  			analogWrite(_inhR, speedB);
			delay(1);
		}

  		analogWrite(_inhL, speedL);
  		analogWrite(_inhR, speedR+10);  		
  		
		delay(100);
	}
}
void Motor::parar(){
  	analogWrite(_inhL, 0);
  	analogWrite(_inhR, 0);
  	digitalWrite(_act2L, LOW);
  	digitalWrite(_act1L, LOW);
  	digitalWrite(_act2R, LOW);
  	digitalWrite(_act1R, LOW);
}

void Motor::frente(int speedL, int speedR){
	if(speedR<1023 && speedL<1023){
  		analogWrite(_inhL, speedL);
  		analogWrite(_inhR, speedR);
  		digitalWrite(_act2R, HIGH);
  		digitalWrite(_act1R, LOW);
  		digitalWrite(_act2L, HIGH);
  		digitalWrite(_act1L, LOW);
	}
}

void Motor::tras(int speedL, int speedR){
	if(speedR<1023 && speedL<1023){
  		analogWrite(_inhL, speedL);
  		analogWrite(_inhR, speedR);
  		digitalWrite(_act1R, HIGH);
  		digitalWrite(_act2R, LOW);
  		digitalWrite(_act1L, HIGH);
  		digitalWrite(_act2L, LOW);
	}
}