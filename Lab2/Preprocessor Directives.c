Preprocessor Directives
//Explain the effect of the following:

#include <marvellous.h>
	//included resource
	
#include "marvellous.h"
	//header file that I've made itself - 	in current directory
	
#define LENGTH 100
	//it's a constant - every time length is said is 100
	
#define CUBE(x) ((x) * (x) * (x))
	//CUBE(x) is equal to the function ((x) * (x) * (x))
	//it is a macro that returns the total power of x
	
#define CALC(x,y,z) ((x) + CUBE(y) + CUBE(CUBE(z)))
	//similar to above
	//x+y^2 +z^g
	
#ifdef LENGTH
	printf("%d", LENGTH);
#endif
	//predefined value of length
	//it'll print the value of length if length has been defined previously


	//A segment of code is only compiled if a given name has been
	//#defined (“conditional compilation”).
	//Without the first line, the preprocessor edits out the printf().
	// used for debugging
	
#ifndef THEFILE
#define THEFILE
void f(void)
{
	printf("Hello world\n");
}
#endif
	//#ifndef checks that a given name has not been defined.
	//it will define the length, if it hasn't been defined and will perform the function
	//if it has been defined, it wont do anything?