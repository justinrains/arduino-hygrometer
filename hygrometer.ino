/*
** By Justin Rains
** Date: 9-28-2015
** Version 1.1
** Simple code to read in from a hygrometer (moisture sensor)
** Connect the sensor analog out to the A0(Analog 0) pin on the Arduino board
** Connect the sensor VCC pin to 5v pin on Arduino the board
** Connect the sensor GND pin to GND pin on the Arduino board.
** If you have any questions please add a comment at http://justinrains.com
*/

const int aIn = 0;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}


void loop() {
  // read the input on analog pin:
  int sensorValue = analogRead(aIn);
  Serial.println(sensorValue);
  delay(3000); // Wait 3 seconds
}

