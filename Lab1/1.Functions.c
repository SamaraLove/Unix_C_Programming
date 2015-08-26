#include <stdio.h>
int readInt(void) {
	int result;
	printf("Enter an integer");
	scanf("%d", &result);
	return result;
}
void printInt(int x) 
{
	printf("The result is: ");
	printf("%d", x);
}
int main(void) 
{
	int a, b, c;
	a = readInt();
	b = readInt();
	c = (a + b) * (a - b);
	printInt(c);
	return 0;
}