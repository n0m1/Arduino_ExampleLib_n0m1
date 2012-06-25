/************************************************************************************
 * 	
 * 	Name    : ExampleLib.h                        
 * 	Author  : Noah Shibley / NoMi Design                        
 * 	Date    : May 17th, 2012                                    
 * 	Version : 0.1                                              
 * 	Notes   : An example Arduino lib. Add your own name, and modify.
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


//include guard
#ifndef EXAMPLE_LIB_H
#define EXAMPLE_LIB_H

#include "utility/ExtraStuff.h" //only used if you have many cpp files in your lib and want to hide some in a subfolder
//#include "utility/ComplexThing.h"  //etc,etc

//Start of the class, change ExampleLib to your library name
class ExampleLib {
 
public: //everything under here is public, accessible outside of the class

//the class constructor
ExampleLib();

    int xVariable; 

    void begin();
    void update();
 
private: //everything under here is private, only accessible inside the class

	int pollSensor();
	int fancyAlgorithm(int inputData);
 
}; //end of class
 
#endif
//include guard end if