
const int inputpin = 11; // digital input
int value = 0;
int oldvalue=0;
int count = 1;

void setup() {
  pinMode(inputpin,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {

//Read the value on input
value = digitalRead(inputpin);

//Check if value has changed
 if(value!=oldvalue){
  oldvalue=value;

  //If there was a press action: HIGH to LOW 
  if(value<1){
    //in case of press, do something
    handler(count);
    Serial.println(count++);
    
    if(count>3){
      count=1;
      }
            }
  }
  
}

void handler(int A){

  switch(A){
        case 1:
        Serial.println("This is Case 1");
        break;

        case 2:
        Serial.println("This is Case 1");
        break;

        case 3:
        Serial.println("This is Case 1");
        break;
    
    }
  
  }
