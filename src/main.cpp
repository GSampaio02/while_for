#include <Arduino.h>

int i = 0;
int c = 0;

int numero;

bool mensagem = true;
void setup() {
  Serial.begin(115200);

  // Serial.println("Digite um número: ");  //Exce1

//   for (int i = 1; i <= 10; i++)
// {
//   Serial.print("TABUADA DO ");
//   Serial.print(i);
//   Serial.println(" ---");
//   for (int c = 0; c <= 10; c++)
//   {
//     Serial.print(i); 
//     Serial.print(" x ");
//     Serial.print(c);          
//     Serial.print(" = ");
//     Serial.println(i * c);    
//   }
//   Serial.println(" ");
// }
  

  // while (i <= 9)
  // {
  //   i++;
  //   Serial.print("Tabuada do ");
  //   Serial.println(i);
  //   while (c <= 9)
  //   {
  //     c++;
  //     Serial.print(i);
  //     Serial.print(" X ");
  //     Serial.print(c);
  //     Serial.print(" = ");
  //     Serial.println(i * c);
  //   }
    
  //   Serial.println();
  //   c = 0;
  // }
  
}

void loop() {
  // if(Serial.available() > 0){
  //   String leitura = Serial.readStringUntil('\n');
  //   leitura.trim();
  //   numero = leitura.toInt();


  //   do
  //   {
  //     if(numero <= 0){
  //       Serial.println("Por favor digite um número maior que 0");
      

  //     while (Serial.available() == 0) {
  //     }

  //     leitura = Serial.readStringUntil('\n');
  //     leitura.trim();
  //     numero = leitura.toInt();
  //   }
  //   } while (numero <= 0);
  // }



  // if(Serial.available() > 0){
  //   String leitura = Serial.readStringUntil('\n');
  //   leitura.trim();
  //   if(leitura == "contagem"){
  //     for (int i = 20; i > 9; i--)
  //     {
  //       Serial.println(i);
  //       if(i == 10 && mensagem){
  //       mensagem = false;
  //       Serial.println("FIM!");
  //     }
  //     }
  //   }
  // }

  // if(Serial.available() > 0){
  //   String leitura = Serial.readStringUntil('\n');
  //   leitura.trim();
  //   if(leitura == "par"){
  //     while (i < 11)
  //     {
  //      if(i % 2 == 0){
  //         Serial.print(i);
  //         Serial.println(" é par");
  //       }
  //       else{
  //         Serial.print(i);
  //         Serial.println(" é impar");
  //       }

  //       i++;
  //     }
      
      
  //   }
  // }



}