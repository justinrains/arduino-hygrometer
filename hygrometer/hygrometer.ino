/*
** By Justin Rains
** Date: 9-28-2015
** Version 1.1
** Simple code to read in from a hygrometer (moisture sensor)
** Connect the sensor analog out to the A0(Analog 0) pin on the Arduino board
** Connect the sensor VCC pin to 5v pin on Arduino the board
** Connect the sensor GND pin to GND pin on the Arduino board.
** This Arduino uno: http://amzn.to/1Ga0qMs
** This RGB led: http://amzn.to/1jt91zi
** I am using this soil moisture sensor: http://amzn.to/1iEy1TU
** If you have any questions please add a comment at http://justinrains.com
*/

const int aIn = 0;
const int redLed = 13;
const int greenLed = 12;
const int blueLed = 11;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
}


void loop() {
  // read the input on analog pin:
  int sensorValue = analogRead(aIn);
  Serial.println(sensorValue);
  if (sensorValue > 1000) {
    digitalWrite(redLed, HIGH);
  } else if (sensorValue > 985) {
    digitalWrite(blueLed, HIGH);
  } else {
    digitalWrite(greenLed, HIGH);
  }
  delay(3000); // Wait 3 seconds
  digitalWrite(blueLed, LOW);
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
  delay(3000);
}

