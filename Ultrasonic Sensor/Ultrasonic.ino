// defines pins numbers
const int trigPin = 8;
const int echoPin = 9;

// defines variables
long duration;
int distance1=0;
int distance2=0;
double speed=0;
int distance=0;

void setup()
{
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input

Serial.begin(9600); // Starts the serial communication
}


void loop()
{

//calculating speed
   distance1 = ultrasonicRead(); //calls ultrasoninicRead() function below
   
   delay(100);//giving a time gap of 0.1 sec
   
   distance2 = ultrasonicRead(); //calls ultrasoninicRead() function below
   
   //formula change in distance divided by change in time
   speed = (distance2 - distance1)/0.1; //as the time gap is 1 sec we divide it by 1.
   
//Displaying speed
  Serial.print("Speed in cm/s  :  ");
  Serial.println(speed);

}

float ultrasonicRead ()
{
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

//calculating distance
distance= duration*0.034/2;

// Prints the distance on the Serial Monitor
Serial.print("Distance in cm : ");
Serial.println(distance);

return distance;

}
