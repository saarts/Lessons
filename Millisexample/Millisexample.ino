
const int ledpin = 13;
const int interval = 1000;
int ledstate = 0;
unsigned long previousmillis = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
}

void loop() {

unsigned long currentmillis = millis();


 if (currentmillis - previousmillis >= interval) {
  if(ledstate==LOW){
    ledstate = HIGH;
    }else{
    ledstate = LOW;
      }
    previousmillis=currentmillis;
    digitalWrite(ledpin,ledstate);
 }

}
