/*    READ FIRST 
 * 
 * LM35 Library 
 * 
 * VERSION: 1.0.1
 * 
 * Author: Guilherme Gomes Zucco
 * 
 * This library set the pin where is the lm35 sensor,
 * and converts the raw value to Celsius or Fahrenheit or Kelvin.
 * 
 * Commands 
 * 
 * Set the pin with
 * LM35 name_of_variable(analog_pin);
 * exemple LM35 temp(A0);
 * 
 * shows the temperature wirh:
 * name_of_variable.cel() - to show the temperature in celsius
 * name_of_variable.fah() - to show the temperature in fahrenheit
 * name_of_variable.kel() - to show the temperature in kelvin
 * 
 * bellow has a example of code, enjoy;
*/

//Libraries
#include <LM35.h>

// setting the sensor in the pin A0
// Command - LM35 name_of_variable(analog_pin);
LM35 temp(A0);
 
// Function that will be executed once when connecting or resetting the Arduino
void setup() 
{
  // start the Serial communication 
  Serial.begin(9600); 
}
 
// Function that will be executed continuously
void loop() 
{
  Serial.print("Temp - ");  //Send a text to serial
  Serial.print(temp.cel()); //It gets the temperature in celcius and send to serial
  Serial.print(" C  - ");   
  Serial.print(temp.fah()); //It gets the temperature in fahrenheit and send to serial
  Serial.print(" F  - ");
  Serial.print(temp.kel()); //It gets the temperature in kelvin and send to serial
  Serial.println(" K");     // Send a text to serial and give a new line 
  Serial.println(" ");      // Blank line

  // to store the value in a variable you will use.   
  //float temperature = temp.cel();

  //delay 
  delay(1000);
}

//end
