
int pin = 13;
char input = 0;


void setup() {
  // put your setup code here, to run once:
      Serial.begin(9600);
      pinMode(pin,OUTPUT);


}

void loop(){
  // put your main code here, to run repeatedly:
    
    if(Serial.available()>0){
      input = Serial.read();
      
            if(input == 97){
              
              digitalWrite(pin,HIGH);
              }
              else
              {
                digitalWrite(pin,LOW);
                }




      
      };

}
