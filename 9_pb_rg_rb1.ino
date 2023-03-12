/*
  PB not pressed RGB white PB pressed RGB off
  
  I used a pushbutton, a RGB LED and 3 303 ohm resistors

  This code uses INPUT_PULLUP on the pushbutton
  
  If the button is pressed, the LED is white. If the button is not pressed,
  the LED is off
*/

int pushButton=7; //Assigning the bit value of pin 7 to the integer "pushButton"  

void setup() // the setup function runs once when you press reset or power the board
{
  Serial.begin(9600); // initialize serial communication at 9600 bits per second
  pinMode(pushButton, INPUT_PULLUP); //Assigning "pushButton" as an input pullup
  pinMode(13, OUTPUT); //Assigning pin 13 as an output
  pinMode(8, OUTPUT); //Assigning pin 8 as an output
  pinMode(2, OUTPUT); //Assigning pin 2 as an output
}

void loop() // the loop function runs over and over again forever
{
  int sensorVal = digitalRead(pushButton);//Reading the value of "pushButton" and storing it into the integer "sensorVal"
  Serial.println(sensorVal); // print out the state of the button

   /*The pull-up means the pushbutton's logic is inverted. It goes
    HIGH when it's open, and LOW when it's pressed*/
  
  if (sensorVal == LOW) // The condition for the if fucntion is that the "sensorVal" value must be 0
  {
    digitalWrite(13, HIGH); //Pin 13 (Red) is on
    digitalWrite(8, HIGH); //Pin 8 (Blue) is on
    digitalWrite(2, LOW); //Pin 2 (Green) is off
  } else {
    digitalWrite(13, HIGH); //Pin 13 (Red) is on
    digitalWrite(2, HIGH); //Pin 2 (Green) is on
    digitalWrite(8, LOW); //Pin 8 (Blue) is off
  }
}
