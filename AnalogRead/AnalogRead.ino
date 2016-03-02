

const int analoginput = A0;
int value = 0;
int oldvalue=0;
int treshold = 3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value = analogRead(analoginput);
  if(abs(oldvalue-value)<treshold){
     return;
    }else{
    Serial.println(value);
    oldvalue=value;
    delay(5);
      
      }
  
}
