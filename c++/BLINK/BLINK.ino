


int RXLed = 17;
void setup() {
  // put your setup code here, to run once:
  pinMode(RXLed, OUTPUT);

}


  // put your main code here, to run repeatedly:
  void loop() {
  digitalWrite(RXLed, HIGH);   // turn the LED on (HIGH is the voltage level)
  TXLED1;
  delay(1000);                       // wait for a second
  digitalWrite(RXLed, LOW);    // turn the LED off by making the voltage LOW
  TXLED0;
  delay(1000);                       // wait for a second
}


