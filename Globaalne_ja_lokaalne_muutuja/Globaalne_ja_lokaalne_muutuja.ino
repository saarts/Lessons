
int globaalne = 1;

// the setup routine runs once when you press reset:
void setup() {
    int lokaalne = 235;
  Serial.begin(9600);
    globaalne = 3;
  Serial.println(globaalne);
    Serial.println(lokaalne);
    Serial.println(teinelokaalne);
  
}

// the loop routine runs over and over again forever:
void loop() {
  int teinelokaalne = 10;
  delay(500);
  globaalne++;
  Serial.println(globaalne);
  Serial.println(teinelokaalne);
}
