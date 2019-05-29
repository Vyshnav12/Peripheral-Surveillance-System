int SensorPin = 2; //The sensor output in connected to Digital Pin 2
int LedPin = 13; // LED connected to Digital Pin 13


void setup() {
  // put your setup code here, to run once:
  pinMode(SensorPin, INPUT); //Takes the Sensor output as input 
  pinMode(LedPin, OUTPUT); // Gives the output to the LED Pin
}

void loop() {
  // put your main code here, to run repeatedly:
  /*This loop checks if there is a detection made by the sensor, if there is, then a current is
    passed through the LED*/
  int sensorValue = digitalRead(SensorPin);
  if(sensorValue == HIGH){
    digitalWrite(LedPin, HIGH);
  }
  else{
    digitalWrite(LedPin, LOW);
  }
}
