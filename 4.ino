void setup()
{
  pinMode(8, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // turn the LED off by making the voltage LOW
  digitalWrite(8, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
