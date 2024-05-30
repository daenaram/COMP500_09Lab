#include <stdio.h>

int calculate_pizza_share(int number_of_people);

int main(void)
{
	int input;

	printf("How many people? \n");
	scanf("%d", &input);
	
	
	if (input <= 0){
	    printf("Error");
	    return 0;
	}

	printf("%d people get %d slice(s) each.\n", input, calculate_pizza_share(input));
	

	return 0;
}

int calculate_pizza_share(int number_of_people)
{
    int slices = 8;
	
    return slices / number_of_people;
    
    
}
