/*
  Arduino PB Pulldown
  The circuit is a pushbutton with a pulldown resistor of 10k ohms

  The code reads a digital input on pin 2 and then prints the result to the Serial Monitor

*/

int pushButton = 2; //Assigning the bit value of pin 2 to the integer "pushButton"

void setup() // the setup function runs once when you press reset or power the board
{
  Serial.begin(9600); // initialize serial communication at 9600 bits per second
  pinMode(pushButton, INPUT); //Assigning "pushButton" as an input
}

void loop() // the loop function runs over and over again forever
{
  int buttonState = digitalRead(pushButton); //Reading the value of "pushButton" and assiging it to the integer "buttonState"
  Serial.println(buttonState); // print out the state of the button
  delay(200); // Wait for 200 milliseconds
}