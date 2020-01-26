int button1 = 11;              
int button2 = 9; 
int led1 = 12;              
int led2 = 8; 
int val1;
int val2;                       

void setup() {
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);          
}

void loop(){
  val1 = digitalRead(button1);
  val2 = digitalRead(button2);
  
  if (val1 == HIGH) {
    digitalWrite(led1,HIGH);                       
      }else{
        digitalWrite(led1,LOW);
        }
  if (val2 == HIGH) {
    digitalWrite(led2,HIGH);                       
      }else{
        digitalWrite(led2,LOW);
        }
  }
    
