
int Y1 = A0;
int Y2 = A1;
int X1 = A2;
int X2 = A3;
void setup() {
  // open a serial connection
  Serial.begin(9600);
  // set the LED pin as an output
}

void loop() {
  // store the value reported by the sensor in a variable
 // long sensorValue = capSensor.capacitiveSensor(30);

  // print out the sensor value
  
  pinMode(Y1 , INPUT);
  pinMode(Y2 , INPUT);
  pinMode(X1 , OUTPUT);
  pinMode(X2 , OUTPUT);

   digitalWrite(X1 , HIGH);
   digitalWrite(X2 , LOW );
  
   float y1 = analogRead(Y1);
  Serial.println(y1);
  

  // if the value is greater than the threshold
  
    // turn the LED on
    
  
  

  delay(40);
}
