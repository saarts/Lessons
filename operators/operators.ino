int a = 40;
int b = 2000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("See on setup");
}

void loop() {
  // put your main code here, to run repeatedly:
  
delay(1000);
Serial.println(b--);

}
