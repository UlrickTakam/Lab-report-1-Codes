/* The arduino blink program

This simple program will make the red LED blink at
a specified rate (1000 milliseconds) */


void setup()
{
  pinMode(8, OUTPUT); //I am assigning the pin 8 as an output
}

void loop()
{
  digitalWrite(8, HIGH); /*This function lets
  the pin 8 give 5V to the LEd*/
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);/* This function stops
  the flow of current from leaving the pin 8*/
  delay(1000); // Wait for 1000 millisecond(s)
}