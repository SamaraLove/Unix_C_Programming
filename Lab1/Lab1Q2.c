#include <stdio.h>

int main(void)
{
	int a,b;
	printf("input two integers\n");
	scanf("%d", &a);
	scanf("%d", &b);

if (a % b == 0)
{	
	printf("divisible");
}
else
{
	printf("not divisible");
}

return 0;
}
