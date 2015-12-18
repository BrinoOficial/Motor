#ifndef Motor_H
#define Motor_H

#include <Arduino.h>

class Motor{
	public:
		Motor(int inhL, int inhR, int act1L, int act2L, int act1R, int act2R);
		void frente(int speed);
		void frente(int speedL, int speedR);
		void tras(int speed);
		void tras(int speedL, int speedR);
		void parar();
		void direita(int speedL, int speedR);
		void esquerda(int speedL, int speedR);
	private:
		int _inhL, _inhR, _act1L, _act2L, _act1R, _act2R;
};

#endif