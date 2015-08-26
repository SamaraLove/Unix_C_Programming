seg fault
outside your range
you don't know what your own range is 

MACROS
Small snippets of code with parameters (but not functions).
I Works by substitution.
The #define directive sets up a macro, 
being a piece of text that gets replaced by another piece, often expanded. 
The simplest form says when you see this name, replace it with another set of characters. So it can be used in place of constants, which the original C language lacked, e.g.: 

#define PI 3.14159 
every occurrence of PI will be changed to 3.14159

its not actually c code 

//#ifdef LENGTH
#defined (“conditional compilation”).
//predefined value of length
	//it'll print the value of length if length has been defined previously
	good for debugging 

//#ifndef THEFILE
	
Make file
Create your own 
instead of compiling all - it'll check for one 
simply a way of associating short names, called targets, 
with a series of commands to execute when the action is requested.


Benefit of pointers
passing by reference!
Use when you want to edit variable in another function
Use a copy of the address
very controlled access - unlike global variable 
can get a function to edit our variable - cant have a function retrun more than one variable

*?.txt 			//any text file that has at least one character

//List all files in the “codes” directory whose name consists of two digits, then a 
//dash, then any three characters;
ls codes/[0-9][0-9]-???

static
it passes that number so it moves to the next line
once it has read it run
ignore the first line

-c compiles it
if you dont do that it will link it 
-o outputs it 

Shortcuts
control c cancels
control z pauses 
fg or bg restarts 
run your program with &
If you press Crtl-C 
the input and output are intermixed 