#include <stdio.h>

void print_equal (int a, int b){
    if (a == b){
        printf("Equal [%d vs %d]\n", a, b);
    }
    
    else {
        printf("Not Equal [%d vs %d]\n", a, b);
    }
}

void print_largest(int a, int b){
    int largest;
    if (a > b){
        largest = a;
    }
    else {
        largest = b;
    }
    printf("%d is largest [%d vs %d]\n", largest, a, b);
}

void print_smallest(int a, int b){
    int lowest;
    if (a < b){
        lowest = a;
    }
    else {
        lowest = b;
    }
    
    printf("%d is smallest [%d vs %d]", lowest, a, b);
    
}

int main(void){
    
    int a, b;
    
    printf("Please enter the first number:\n");
    printf("Please enter the second number:\n");
    scanf("%d %d", &a, &b);
    print_equal(a,b);
    print_largest(a, b);
    print_smallest(a, b);
    
}
