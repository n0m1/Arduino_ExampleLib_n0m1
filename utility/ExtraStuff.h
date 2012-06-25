/************************************************************************************
 * 	
 * 	Name    : ExtraStuff.h                        
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


//This class is just an example of how to use many cpp classes and hide them in a subfolder. 
//Its not necessary, just an advanced possiblity for a large complex library
#ifndef EXTRA_STUFF_H
#define EXTRA_STUFF_H
 

class ExtraStuff {
 
public: 
	
//the class constructor
ExtraStuff();

   void initExtra();
 
private: 

  void extraFancy();
 
}; //end of class
 
#endif
//include guard end if