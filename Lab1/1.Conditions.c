#include <stdio.h>

int main(void) {
	int number;
	scanf("%d", &number);

	if(number < 0 || number > 10)
		printf("Out of range\n");
	else if(number != 5)
		printf("Wrong\n");
	else
		printf("Correct\n");

		return 0;
}