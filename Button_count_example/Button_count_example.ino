
const int inputpin = 11; // digital input
int value = 0;
int oldvalue=0;
int count = 0;

void setup() {
  pinMode(inputpin,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {

value = digitalRead(inputpin);
 if(value!=oldvalue){
  //Serial.println(value);
  oldvalue=value;
  
  if(value<1){
    Serial.println(count++);
            }

  
  }
  
}
