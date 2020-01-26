const int led1=8;
const int led2=7;

unsigned long currentMillis=0;
unsigned long previousMillis1=0;
unsigned long previousMillis2=0;


long OnTime1 = 400;
long OnTime2 = 750;

long OffTime1 = 400;
long OffTime2 = 750;

int ledState1=LOW; 
int ledState2=LOW; 

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  currentMillis = millis();
  
  if((ledState1 == HIGH) && (currentMillis - previousMillis1 >= OnTime1)) //2. (800 - 400 >= 400)? si
  {
    ledState1 = LOW; //2. Cambia el estado del led a LOW
    previousMillis1 = currentMillis; //2. previousMillis1 = 800
    digitalWrite(led1, ledState1); //2. Apaga el led!
  }
  else if ((ledState1 == LOW) && (currentMillis - previousMillis1 >= OffTime1)) //1.(400-0 >= 400)? si
  {
    ledState1 = HIGH; //1. cambia el estado del led a HIGH para que pase a la primera parte del condicional
    previousMillis1 = currentMillis;//1. previousMillis1 = 400
    digitalWrite(led1, ledState1); // 1. Enciende el led!
  }

  if((ledState2 == HIGH) && (currentMillis - previousMillis2 >= OnTime2))
  {
    ledState2 = LOW;
    previousMillis2 = currentMillis;
    digitalWrite(led2, ledState2);
  }
  else if ((ledState2 == LOW) && (currentMillis - previousMillis2 >= OffTime2))
  {
    ledState2 = HIGH;
    previousMillis2 = currentMillis;
    digitalWrite(led2, ledState2);
  }
}
