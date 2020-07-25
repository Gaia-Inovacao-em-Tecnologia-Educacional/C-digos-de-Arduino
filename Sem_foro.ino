// Esse é o código em C um pouco mais simplificado :

void setup()

{
DDRB = B111000;                    // Define os pinos 13,12 e 11 como saídas e 10,9 e 8 como entradas . 
  }
 
void loop()      {
 
int i=0;                             //        ' i'  servirá para a contagem para os 3 estados do semáforo e inicia com                                                       //            valor = 0
 
  PORTB=B001000;                   // SINAL VERDE : Acende o led do pino 11   . 
   
  delay(5000);                         // Rotina de temporarização  : Aguarda 5000 mili segundos ou 5 segundos. 
 
  for(i=0; i<1; i++)                       //  Estruturado o laço de repetição 'for' para contagem e transição dos                                                                    // sinais amarelo e vermelho
 
  {
  
    PORTB=PORTB<<1;                // SINAL AMARELO :  '<<'    Desloca o bit para esquerda no pino 11 para 
                                                           // o pino 12 
    delay(2000);
      
    PORTB=PORTB<<1;              // SINAL VERMELHO:  '<<'   Desloca o bit para esquerda no pino 12 para
                                                     // o pino 13
    delay(4000);
  
  
  }
  
 
       
}
