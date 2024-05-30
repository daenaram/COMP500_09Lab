#include <stdio.h>

char is_letter (char input){
    
    if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')){
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
    is_letter(input);
    
    return 0;
}
