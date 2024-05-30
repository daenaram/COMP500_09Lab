#include <stdio.h>

int identify_minimum_value(int num1, int num2){
    int minimum_value;
    
    if (num1 < num2){
        minimum_value = num1;
    }
    
    else {
        minimum_value = num2;
    }
    
    return minimum_value;
}

int main(){
    
    int num1, num2;
    
    printf("Please input number 1:\n");
    printf("Please input number 2:\n");
    scanf("%d %d", &num1, &num2);
    printf("The minimum number of %d and %d is %d", num1, num2, identify_minimum_value(num1, num2));
    
}
