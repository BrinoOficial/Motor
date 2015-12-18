# Motor
Biblioteca em portugu�s para controle f�cil do driver de motor L293D com foco na movimenta��o de rob�s.

## Documenta��o
- `Motor::Motor(int inhL, int inhR, int act1L, int act2L, int act1R, int act1R)`<br>
      `inhL` - pino que se liga � porta 1 do CI. Usado para controle de velocidade do motor conectado aos pinos 3 e 6 do CI via pwm<br>
      `inhR` - pino que se liga � porta 9 do CI. Usado para controle de velocidade do motor conectado aos pinos 11 e 14 do CI via pwm<br>
      `act1L` - pino que se liga � porta 2 do CI. Input 1 que controla a sa�da 1 na porta 3.<br>
      `act2L` - pino que se liga � porta 7 do CI. Input 2 que controla a sa�da 2 na porta 6.<br>
      `act1R` - pino que se liga � porta 10 do CI. Input 3 que controla a sa�da 3 na porta 11.<br>
      `act2R` - pino que se liga � porta 15 do CI. Input 4 que controla a sa�da 4 na porta 14.<br><br>
- `Motor::frente(int velocidade)` e `Motor::tras(int velocidade)`<br>
      Rotacionam ambos os motores na mesma velocidade.<br>
      `velocidade` - velocidade aplicada a ambos os motores. Aceita valores de 0-1023.<br>
      Estes met�dos utilizam uma fun��o cosseno com b exponencial durante os primeiros 120 ms de execu��o para gerar um pico de velocidade suficiente para iniciar o movimento. Depois dos 120ms a velocidade estabiliza no valor fornecido.<br><br>
- `Motor::frente(int velocidadeL, int velocidadeR)` e `Motor::tras(int velocidadeL, int velocidadeR)`<br>
      Rotacionam os motores com velocidade ajust�veis individualmente.<br>
      `velocidadeL` - velocidade aplicada ao motor da esquerda. Aceita valores de 0-1023.<br>
      `velocidadeR` - velocidade aplicada ao motor da direita. Aceita valores de 0-1023.<br><br>
- `Motor::parar()`<br>
      Para os motores.<br><br>
- `Motor::direita(int velocidadeL, int velocidadeR);`<br>
      Rotaciona o motor da direita para tr�s e o motor da esquerda para a frente com velocidades ajust�veis individualmente.<br>
      `velocidadeL` - velocidade aplicada ao motor da esquerda. Aceita valores de 0-1023.<br>
      `velocidadeR` - velocidade aplicada ao motor da direita. Aceita valores de 0-1023.<br><br>
- `Motor::esquerda(int velocidadeL, int velocidadeR);`<br>
      Rotaciona o motor da esquerda para tr�s e o motor da direita para a frente com velocidades ajust�veis individualmente.<br>
      `velocidadeL` - velocidade aplicada ao motor da esquerda. Aceita valores de 0-1023.<br>
      `velocidadeR` - velocidade aplicada ao motor da direita. Aceita valores de 0-1023.<br><br>
