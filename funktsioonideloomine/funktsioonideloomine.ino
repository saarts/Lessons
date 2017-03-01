void setup() {
Serial.begin(9600);
}

void loop() {
  delay(1000);
  lihtfunktsioon();
  sisendigafunktsioon(34);
  Serial.println(tagastusegafunktsioon(23,11));
}

void lihtfunktsioon(){
  Serial.println("See on lihtfunktsioon");
}

void sisendigafunktsioon(int a){
  Serial.print("Selle funktsiooni sisend on ");
    Serial.println(a);
}

int tagastusegafunktsioon(int a,int b){
    int c = 0;          // loon väärtuse, mida tagastatkse
  c = a + b;          // teen tehte
    Serial.print("See funktsioon tagastab ");
    Serial.println(c);
    return c;         // tagastan loodud väärtuse
}


