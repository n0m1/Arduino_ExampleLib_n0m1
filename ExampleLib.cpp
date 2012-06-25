/************************************************************************************
 * 	
 * 	Name    : ExampleLib.cpp                        
 * 	Author  : Noah Shibley / NoMi Design                        
 * 	Date    : May 17th, 2012                                    
 * 	Version : 0.1                                              
 * 	Notes   : An Example Arduino lib. Add your own name, and modify.
              A blog post about how to use this lib is found here:
              http://n0m1.com/2012/04/26/writing-your-own-arduino-libraries/                   
 * 
 * 	Copyright (c) 2012 NoMi Design (http://n0m1.com) All right reserved.
 * 
 * 	This file is part of ExampleLib. See n0m1.com for more information.
 * 
 * 		    ExampleLib is free software: you can redistribute it and/or modify
 * 		    it under the terms of the GNU General Public License as published by
 * 		    the Free Software Foundation, either version 3 of the License, or
 * 		    (at your option) any later version.
 * 
 * 		    ExampleLib is distributed in the hope that it will be useful,
 * 		    but WITHOUT ANY WARRANTY; without even the implied warranty of
 * 		    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * 		    GNU General Public License for more details.
 * 
 * 		    You should have received a copy of the GNU General Public License
 * 		    along with ExampleLib.  If not, see <http://www.gnu.org/licenses/>.
 * 
 ***********************************************************************************/

#include "ExampleLib.h"
 
//the constructor
ExampleLib::ExampleLib(){
  //a good place to initalize your class variables. 
}
 
//the body of begin function
void ExampleLib::begin(){
	
   //setup your sensor here,or something
}
 
//the body of the update function
void ExampleLib::update(){
	
  //do some stuff in the loop	
  int data =  pollSensor();
  int result = fancyAlgorithm(data);

  xVariable = result; //now you can access this data outside the class. Or you could use a getter/setter function

}

int ExampleLib::pollSensor(){

//analogRead or something
	return 1; 
}

int ExampleLib::fancyAlgorithm(int inputData){

//some complex stuff

  return 1;
}