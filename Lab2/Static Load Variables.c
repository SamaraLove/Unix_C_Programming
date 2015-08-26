Static local variables
//Each time it is called, the function should return the next power of two in sequence.
//Called once, your function should return 2. Called a second time, your function
//should return 4, then 8, then 16, then 32, etc.
//Note: Use local variables only, not global variables.
//Once your function is finished, write a main() function to test it.

#include <stdio.h>
#include <math.h>

/* Function to calculate x raised to the power y */
//C library function double pow(double x, double y) returns x raised to the power of y i.e. xy.
int main(void)
{
	double exponent, result;
	double base =2;
	
	exponent = 1;
	while (exponent >= 0)
	{	
		printf("input an integer n for for 2^n\n");
		scanf("%lf", &exponent);
		
		if (exponent >= 0)
		{
			result = double pow(double base, double exponent);
			printf("2^%lf is equal to %lf\n", exponent, result);
		}
		else 
		{
			printf("Not allowed.\n");
		}
	}
	return 0;
}

int power(int x, unsigned int y)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
 
}
