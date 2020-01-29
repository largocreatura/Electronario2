#include <SoftwareSerial.h>

SoftwareSerial miBT(10, 11);  // pin 10 como RX, pin 11 como TX

char dato = 0;
int led1 = 11;    
int led2 = 12;   
int brilloLed2=0;

void setup(){
  miBT.begin(38400); 
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
}

void loop(){
  if (miBT.available()){  // si hay informacion disponible desde modulo
    dato = miBT.read();   // almacena en dato el caracter recibido desde modulo
  
    if( dato == '1' ) {
      brilloLed2 = brilloLed2+10;
      if (brilloLed2 > 255){
        brilloLed2=255;
      }
      analogWrite(led2,brilloLed2);
    }

    if( dato == '2' ) {
      brilloLed2 = brilloLed2-10;
      if (brilloLed2 < 0){
        brilloLed2=0;
      }
      analogWrite(led2,brilloLed2);
    }
  }
}
