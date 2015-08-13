#include <stdio.h>

int factorial(int);

int main(void)
{
	int number, result;
	
	printf("input one integer to calculate its factorial\n");
	scanf("%d", &number);
	result = factorial(number);
	printf("factorial of %d is equal to %d\n", number, result);
	
return 0;
	
}


int factorial(int n)
{
	int f;
if (n > 0)
{ 
     	printf("n=%d\n",n);
	f = n*factorial(n-1);
	return f;

}
else
{
	return 1;

}
