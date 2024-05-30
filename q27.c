#include <stdio.h>

void print_top () {
printf("/\\/\\/\\/\\/\\");    
printf("\n");    
}

void print_bottom () {
printf("\\/\\/\\/\\/\\/");    
printf("\n");    
}


void print_middle (int how_many) {
    for(int i = 0; i < how_many; i++) {
        
    printf("\\        /");
    printf("\n");
    printf("/        \\");
    printf("\n");
    }
}
    

int main () {
    
int middle_parts;

printf("How many middle parts?\n");
scanf("%d", &middle_parts);

    print_top();
    print_middle(middle_parts);
    print_bottom();
    
    return 0;
    
}
