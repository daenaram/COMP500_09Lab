#include <stdio.h>

int calculate_cube(int base);

int main(void)
{
	int number = 0;

	printf("Please input a whole number: \n");

	scanf("%d", &number);

	printf("\n%d^3 = %d\n", number, calculate_cube(number));

	return 0;
}

int calculate_cube(int base)
{
    int number;
	number = base * base * base;
	
	return number;
}
