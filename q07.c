#include <stdio.h>

char convert_percent_to_grade(float input){
    if (input >= 80){
        printf("A");
    }
    
    else if (input < 80 && input >= 65){
        printf("B");
    }
    
    else if (input < 65 && input >= 50){
        printf("C");
    }
    
    else {
        printf("D");
    }
    
    return 0;
}

int main(){
    
    float input;
    
    printf("What's the percentage:\n");
    scanf("%f", &input);
    printf("%.2f%% is ", input);
    convert_percent_to_grade(input);
    printf(" Grade");
}
