#include<stdio.h>
int to_upper(char input){
    if (input >= 'a' && input <= 'z'){
        input = input - ('a' - 'A');
        return input;
    }else {
        return 0;
    }
    return 0;
}
int main(){
    printf("Please enter a letter: ");
    char input;
    scanf(" %c",&input);
    printf("%c",to_upper(input));
}
