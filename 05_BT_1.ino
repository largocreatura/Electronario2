#include <SoftwareSerial.h>

SoftwareSerial miBT(10, 11);  // pin 10 como RX, pin 11 como TX

char dato = 0;
int led1 = 11;    
int led2 = 12;   
int stateLed1=0;
int stateLed2=0;

void setup(){
  miBT.begin(38400); 
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
}

void loop(){
  if (miBT.available()){  // si hay informacion disponible desde modulo
    dato = miBT.read();   // almacena en dato el caracter recibido desde modulo
  
    if( dato == '1' ) {
      digitalWrite(led1,LOW);
    }

    if( dato == '2' ) {
      digitalWrite(led1,HIGH);
    }

    if( dato == '3' ) {
      digitalWrite(led2,LOW);
    }

    if( dato == '4' ) {
      digitalWrite(led2,HIGH);
    }
  }
}
