#include <stdio.h>

char is_vowel(char i){
    if (i == 'a' || i == 'A' || i == 'e' || i == 'E' || i == 'i' || i == 'I' || i == 'o' || i == 'O' || i == 'u' || i == 'U'){
        printf("1");
    }
    
    else {
        printf("0");
    }
    
    return 0;
}

int main(){
    
    char i;
    
    printf("> ");
    scanf(" %c", &i);
    is_vowel(i);
    
    return 0;
}
