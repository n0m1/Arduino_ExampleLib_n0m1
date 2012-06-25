#include "ExampleLib.h"
 
//the constructor
ExampleLib exLib;
 
void setup(){
 
   exLib.begin(); //initialize
   Serial.begin(9600);
}
 
void loop(){
 
  exLib.update(); //update every loop
  Serial.println(exLib.xVariable);
 
}

