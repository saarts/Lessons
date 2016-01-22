//defining a constant value for LED to be 6th bit
#define LED 0b00100000;


void setup() {
//Setting Digital Direction for port B 6th element to be output
DDRB = 0b00100000;
}

void loop() {

// inclusive or, therefore, if LED is off, it turns it on
PORTB ^= LED;





}
