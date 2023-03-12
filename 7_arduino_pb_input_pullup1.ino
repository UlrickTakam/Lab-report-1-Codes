/*
  Arduino PB Input Pullup
  I use a pushbutton only

  This code demonstrates the use of pinMode(INPUT_PULLUP).
  
  It reads a digital input on pin 2 and prints the results to the Serial Monitor.

  Unlike pinMode(INPUT), there is no pull-down resistor necessary. An internal
  20K-ohm resistor is pulled to 5V.
*/

int pushButton=7; //Assigning the bit value of pin 7 to the integer "pushButton"
  
void setup() // the setup function runs once when you press reset or power the board
{
  Serial.begin(9600); // initialize serial communication at 9600 bits per second
  pinMode(pushButton, INPUT_PULLUP); //Assigning "pushButton" as an input pullup
  pinMode(13, OUTPUT); //Assigning pin 13 as an output
}

void loop() // the loop function runs over and over again forever
{
  int sensorVal = digitalRead(pushButton); //Reading the value of "pushButton" and storing it into the integer "sensorVal"
  Serial.println(sensorVal); // print out the state of the button

  /*The pull-up means the pushbutton's logic is inverted. It goes
    HIGH when it's open, and LOW when it's pressed*/
  
  if (sensorVal == HIGH) // The condition for the if fucntion is that the sensorVal value must be 1
  {
    digitalWrite(13, LOW); //Pin 13 is off
  } else {
    digitalWrite(13, HIGH); //Pin 13 is on
  }
}
