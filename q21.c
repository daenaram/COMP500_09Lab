#include <stdio.h>

int is_hex_digit(char input);

int main(){
    
    char input;
    
    printf("> ");
    scanf(" %c", &input);
    is_hex_digit(input);
}

int is_hex_digit(char input){
    if ((input >= '0' && input <= '9') || (input >= 'a' && input <= 'f') || (input >= 'A' && input <= 'F')){
        printf("1");
    }
    
    else {
        printf("0");
    }
    
    return 0;
}
