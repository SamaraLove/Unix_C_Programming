// Miscellaneous Questions
(a) Why does scanf() produce a segmentation fault when you pass it an int
without the &?
// pass an int without the address 
// your passing ti a value 

(b) If you have an int pointer, why would it be wrong to put a & in front of it when
passing it to scanf()?
// passing the address of the pointer
// similar to a 

(c) Without any other information, can you determine what type of value is stored
at the address of a void pointer?
// no
// we can't follow it - there is no way to check it if you do not know it

(d) Can an int pointer be equal to a char pointer?
// if two pointers are equal ,we are looking at their addresses
// char and pointer can point to the same addresses

char c = 65 //legit c code
of c == 'a'
// having two pointers point at the same thing 