//distance sensor 

// Define Trig and Echo pin:
#define trigPin 2
#define echoPin 3

// Define variables:
long duration;
int distance;


//liquid detector 
int inpin=7;// initialize pin 7

//buzzer 
int buzzer=13;// initialize pin 13
int val;// define val

//vibrator 9
int motorPin = 9; //motor transistor is connected to pin 9


void setup() {
  // Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(buzzer, OUTPUT);
  pinMode(inpin,INPUT);

  pinMode(motorPin, OUTPUT);
  // Begin Serial communication at a baudrate of 9600:
  Serial.begin(9600);
}


void loop()
{

  //liquid sensor 
  val=digitalRead(inpin);// read the level value of pin 7 and assign if to val
  Serial.println(val); // print the data from the sensor
  delay(100);
  if(val==LOW)// check if the button is pressed, if yes, turn on the LED
  {noTone(buzzer);}
  else
  {tone(buzzer, 500);}

  //distance sensor
  digitalWrite(trigPin, LOW);
  
  delayMicroseconds(5);

 // Trigger the sensor by setting the trigPin high for 10 microseconds:
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Read the echoPin. pulseIn() returns the duration (length of the pulse) in microseconds:
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance:
  distance = duration*0.034/2;
  
  // Print the distance on the Serial Monitor (Ctrl+Shift+M):
  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(100);

  if(distance < 20)
  {digitalWrite(motorPin, LOW); //vibrate
  delay(1000);  // delay one second
  }
  else
  {digitalWrite(motorPin, HIGH);}
  
}







