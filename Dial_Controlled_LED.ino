int adcValue ;    // creates integer adcValue
int ledPin = 9 ;  // creates the integer ledPin and sets the value to 9

void setup() {
  pinMode (ledPin, OUTPUT) ;  // sets pin 9 to an output
}

void loop() {
  adcValue = analogRead (A0) ;                             // sets analog port A0 to read
  analogWrite (ledPin, map(adcValue, 0 , 1023, 0, 255)) ;  // sets a range of 0 - 255 and allows ledpin to use PWM duty cycles 

}
