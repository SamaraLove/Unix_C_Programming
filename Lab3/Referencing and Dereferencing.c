// Referencing and Dereferencing - LEARN THIS - in TEST AND EXAM

Say you have these declarations:
int a = 2;
int b = 10;
int* x = NULL;
int* y = NULL;
int** s = NULL;
int** t = NULL;

//  What are the values of a and b after each of the following? In each case, draw a
// small diagram showing which variables point to which other variables. (Assume the
// variables are “reset” after each example.)

(a) x = &a;
*x = b;
// x points to a, deference x ...

(b) s = &x;
x = &a;
y = &b;
t = s;
**t = **t * *y;
// a = a*b 
// a = 20

(c) int i;
x = &a;
y = &b;
for(i = 1; i <= *x; i++)
{
*y = *y * 2;
}
//


(d) x = &b;
y = &a;
t = &y;
*t = x;
if(**t > 5) {
s = t;
}
else {
s = &x;
}
**s = **s / *x;
//

(e) x = (int*)malloc(sizeof(int));
y = (int*)malloc(sizeof(int));
*x = 8;
CRICOS Provide Code: 00301J Page 2 of 6
UNIX & C Programming (COMP1000) Worksheet 3: Pointers
*y = 8;
if(x == y) {
a = *x;
}
if(*x == *y) {
b = *y;
}
//memory alloc - allocate memory 
// need to allocate new memory for x specifically 
// 

(f) s = (int**)malloc(sizeof(int*));
*s = (int*)malloc(sizeof(int));
t = s;
x = *t;
**t = b;
s = (int**)malloc(sizeof(int*));
*s = &a;
**s = *x;
//