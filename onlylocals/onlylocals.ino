
//without globals, use function arguments and use function return values

void setup() {
  //local
  int answer;
  
  Serial.begin(9600);
  //using global
  int aaa = 5;
  int bee = 7;

  //using local
  answer=ADD(aaa,bee);
  Serial.println(answer);
}

void loop() {
}

// local variables in function return
int ADD(int A, int B){

   
   return A+B;
  
  
  
  }
