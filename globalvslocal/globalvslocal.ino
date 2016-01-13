
//global
int aaa;
int bee;




void setup() {
  //local
  int answer;
  
  Serial.begin(9600);
  //using global
  aaa = 5;
  bee = 7;

  //using local
  answer=ADD();
  Serial.println(answer);
}

void loop() {
}


int ADD(){

   
   return aaa+bee;
  
  
  
  }
