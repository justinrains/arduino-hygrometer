//const int aIn = 

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(0);
  Serial.println(sensorValue);
  delay(3000);
}

