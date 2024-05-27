#include <stdio.h>
char is_vowel(char input){
    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' || input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U'){
        printf("1");
        return 0;
    }
    
    else{
        printf("0");
        return 0;
    }
}
int main(){
    printf("> ");
    char input;
    scanf("%c",&input);
    is_vowel(input);
}
