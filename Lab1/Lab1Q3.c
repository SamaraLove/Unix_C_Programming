#include <stdio.h>

int factorial(int);

int main(void)
{
	int number, result;
	number = 1;
	while (number >= 0)
	{	
		printf("input one integer to calculate its factorial\n");
		scanf("%d", &number);
		
		if (number >= 0)
		{
			result = factorial(number);
			printf("factorial of %d is equal to %d\n", number, result);
		}
		else 
		{
			printf("Negative integers are not allowed.\n");
		}
	}

return 0;
}

int factorial(int n)
{
	int f, temp;
if (n > 0)
{ 
//     	printf("n=%d\n",n);
	f = n*factorial(n-1);
	temp = f; // replacing 'return = f' with a variable called temp

}
else
{
	temp = 1;
}
return temp;
}
