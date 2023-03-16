//next add variables:
// use two pins:
// plus add comments to help with records:
// ie. the red led is pin and pin 10 is blue
int redLEDPin = 9;
int blueLEDPin = 10;
int redTimeOn = 250;
int redTimeOff = 500;
int blueTimeOn = 100;
int blueTimeOff = 1000;
int numRedBlink = 3;
int numBlueBlink=5;
void setup() {
  // put your setup code here, to run once:
  pinMode( redLEDPin, OUTPUT);
  pinMode( blueLEDPin, OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
  // print the red LED 10 times and the blue 1 once.
  // loop thru the red led light 10 times
  // and loop thru the blue 1 once. plus add conditions:

for(int i = 1; i<= numRedBlink; i = i+1){
  
  digitalWrite(redLEDPin, HIGH); // turn on red led
  delay(redTimeOn);
  digitalWrite(redLEDPin, LOW);
  delay(redTimeOff);
  
}

for (int j = 1; j <= numBlueBlink; j++){
  digitalWrite(blueLEDPin, HIGH);
  delay(blueTimeOn);
  digitalWrite(blueLEDPin, LOW);
  delay(blueTimeOff);
  
  
}
}
