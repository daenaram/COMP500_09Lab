#include <stdio.h>

char is_digit(char input){
    if (input >= '0' && input <= '9'){
        printf("1");
    }
    else {
        printf("0");
    }
    
    return 0;
}

int main(void){
    
    char input;
    printf("> ");
    scanf(" %c", &input);
    is_digit(input);
    
    return 0;
}
