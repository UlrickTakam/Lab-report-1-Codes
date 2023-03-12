/* Light Chaser program 1

This program will make 4 different LEDs blink one after
another from left to right consistenly to give the illusion
of a light chaser */

int red = 13;//Assigning the bit value of pin 13 to the integer "red"
int yellow = 12; //Assigning the bit value of pin 12 to the integer "yellow"
int blue = 8; //Assigning the bit value of pin 8 to the integer "blue"
int green = 7; //Assigning the bit value of pin 7 to the integer "green"
  
void setup() // the setup function runs once when you press reset or power the board
{
  pinMode(red, OUTPUT); //Assigning "red" as an output
  pinMode(yellow, OUTPUT); //Assigning "yellow" as an output
  pinMode(blue, OUTPUT); //Assigning "blue" as an output
  pinMode(green, OUTPUT); //Assigning "green" as an output
}

void loop() // the loop function runs over and over again forever
{
  digitalWrite(green, LOW); //Green LED is off
  digitalWrite(red, HIGH); //RED LED is on
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(red, LOW); //Red LED is off
  digitalWrite(yellow, HIGH); //Yellow LED is on
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(yellow, LOW); //Yellow LED is off
  digitalWrite(blue, HIGH); //Blue LED is off
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(blue, LOW); //Blue LED is off
  digitalWrite(green, HIGH); //Green LED is on
  delay(200); // Wait for 200 millisecond(s)
 
}
