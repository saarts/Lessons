//defining a constant value for LED to be 6th bit
#define LED 0b00100000;
volatile unsigned long i;

void setup() {
//Setting Digital Direction for port B 6th element to be output
DDRB = 0b00100000;
}

void loop() {

// inclusive or, therefore, if LED is off, it turns it on
PORTB |= LED;

i = 200000;
do i--;
while(i!=0);


//And operator with bitflip, so if LED is on, it turns it off
PORTB &= ~LED;

i = 200000; 
do i--;
while(i!=0);



}
