/*

This is a simple example that allows you to connect 4 buttons and a rotary encoder to your Arduino.
The Arduino acts as a keyboard by outputting button presses.

You will need this table to figure the code for the characters you are trying to output.
http://www.asciitable.com/

*/

#include <Keyboard.h>      // include library that let's Arduino act as a keyboard

// some useful values
#define OFF 0
#define ON 1

// start by assuming no buttons are pressed
bool keyA = OFF;
bool keyB = OFF;

void setup()
{

  // connect to serial port for debugging
  Serial.begin(57600);

  // make pin 2 and 3 an input and turn on the
  // pullup resistor so it goes HIGH unless
  // connected to ground:
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);

  // start the keyboard
  Keyboard.begin();
}

void loop()
{
  // All the key presses happen here
  // For reference, check https://docs.arduino.cc/language-reference/en/functions/usb/Keyboard/keyboardModifiers/
  //////////////////////////////////////////////

  if ((digitalRead(2) == LOW) && keyA == OFF)
  {
    keyA = ON;
    Keyboard.write('A'); // A
  }
  if (digitalRead(2) == HIGH)
  {
    keyA = OFF;
  }

  if ((digitalRead(3) == LOW) && keyB == OFF)
  {
    keyB = ON;
    Keyboard.write('D'); // D
  }
  if (digitalRead(3) == HIGH)
  {
    keyB = OFF;
  }
}
