/* RGB Light Chaser program 

This program will make 4 different LEDs blink one after
another from left to right consistenly to give the illusion
of a light chaser */

int red = 8 ; //Assigning the bit value of pin 7 to the integer "red"
int DELAY = 500 ; //Assigning the time value of 500 milliseconds to the integer "DELAY"
int blue = 12 ; //Assigning the bit value of pin 12 to the integer "blue"
int green = 2 ; //Assigning the bit value of pin 2 to the integer "green"

  
// the setup function runs once when you press reset or power the board
  void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(red, OUTPUT); //Assigning "red" as an output
  pinMode(blue, OUTPUT); //Assigning "blue" as an output
  pinMode(green, OUTPUT); //Assigning "green" as an output
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(red, 1); //Red light is on
  delay(DELAY); // Wait for 500 milliseconds                 
  digitalWrite(red, 0); //Red light is off 
  digitalWrite(green, 1); //Green light is on
  delay(DELAY); // Wait for 500 milliseconds 
  digitalWrite(green, 0); //Green light is off
  digitalWrite(blue, 1); //Blue light is on
  delay(DELAY); // Wait for 500 milliseconds                        
  digitalWrite(blue, 0); //Blue light is off

  
 
  
}
