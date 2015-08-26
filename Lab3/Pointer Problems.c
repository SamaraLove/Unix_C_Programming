// PRELAB
// Pointer Problems
// There is an error in each of the following. What is it?
(a) int value = NULL;
	// primitive types in C, can't say its null, null is a special type of pointer value
	
(b) int* pointer;
	pointer = 42;
	// setting location of pointer to memory address 42

(c) int* pointer;
	*pointer = 42;
//create a pointer and try to usse it straight away
//uninitialised 

(d) char ch;
	char** pointer;
	pointer = &ch;
// can have a double star - pointer to a pointer to a star
// if we take the address of char 
// the value of pointer has to be the address to a pointer to a char
// which is what the address of ch is doing

(e) double value = 42.0;
	void* pointer = (void*)&value;
	*pointer = 84.0;
// pointer with an unknown data point 
// type casting address of value to a fold 
// one can never deference a pointer without casting it first 

(f) void (*pointer)(int, int);
	(*pointer)(5, 10);
// first line - function pointer, points to a function which takes two ints and returns nothing
// very similar to cabs

(g) int function1(void) {
	return 42.0;
	}
void function2(void) {
	void (*pointer)(int);
	pointer = &function1;
	...
	}
// data type mismatch 
fucntion 1 takes nothing and returns int
expecting one type and 