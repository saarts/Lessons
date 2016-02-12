
int inputpin = 7;
int outputpin = 13;

 
void setup() {
  pinMode(inputpin,INPUT);
  pinMode(outputpin,OUTPUT);

}

void loop() {
int x = 0;

  if(digitalRead(inputpin)==LOW){
    
    for(x=0;x<10;x++){
      digitalWrite(outputpin, HIGH);
      mydelay(); 
      digitalWrite(outputpin, LOW);
      mydelay(); 
      }
      
      for(x=0;x<10;x++){
      digitalWrite(outputpin, HIGH);
      delay(500);
      digitalWrite(outputpin, LOW);
      delay(500);   
      }
    
    }else{
    digitalWrite(outputpin, LOW); 
      }

}


void mydelay(){

double a = 0;
  for(a =0;a<10000;a++){
    }
  
  }


