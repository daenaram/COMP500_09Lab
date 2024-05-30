#include <stdio.h>
void print_nozzle(int width);
void print_body(int width, int height);
void print_logo(int width);
int main()
{
    int width;
    int height;
    printf("Rocket body width (minimum 6)?\n");
    scanf("%d", &width);
    printf("Rocket body height?\n");
    scanf("%d", &height);
    
    print_nozzle(width);
    print_body(width, height);
    print_logo(width);
    print_body(width, height);
    print_nozzle(width);
}

void print_nozzle(int width)
{
    int height = width / 2;
    int spaces_before_top = height - 1;
    int spaces_between = 0;
    
    for (int i = 1; i < height; i++)
        {
            for (int j = 0; j <= spaces_before_top; j++)
                {
                    printf(" ");
                }
                
            printf("/");
            
            for (int j = 0; j < spaces_between; j++)
                {
                    printf(" ");
                }
            
            printf("\\\n");
            
            spaces_before_top--;
            spaces_between += 2;
        }
        
    printf(" /");
    
    for (int i = 0; i < 2 * height - 2; i++)
        {
            printf(" ");
        }
        
    printf("\\\n");   
}

void print_body(int width, int height)
{
    printf("+");
    for (int i = 0; i < width; i++)
        {
            printf("-");
        }
    printf("+\n");
    
    for (int j = 0; j < height; j++)
        {
            printf("|");
            for (int k = 0; k < width; k++)
                {
                    printf(" ");
                }
            printf("|\n");
        }
    printf("+");
    for (int i = 0; i < width; i++)
        {
            printf("-");
        }
    printf("+\n");
    
}

void print_logo(int width)
{
    printf("|");
    for (int i = 0; i < (width - 6) / 2; i++)
        {
            printf(" ");    
        }
    
    printf(" N    ");
    
    for (int i = 0; i < (width - 6) / 2; i++)
        {
            printf(" ");    
        }
    printf("|\n");
    
    
    printf("|");
    for (int i = 0; i < (width - 6) / 2; i++)
        {
            printf(" ");    
        }
    
    printf("    Z ");
    
    for (int i = 0; i < (width - 6) / 2; i++)
        {
            printf(" ");    
        }
    
    printf("|\n");
    
    printf("|");
    for (int i = 0; i < (width - 6) / 2; i++)
        {
            printf(" ");    
        }
    
    printf("Rocket");
    
    for (int i = 0; i < (width - 6) / 2; i++)
        {
            printf(" ");    
        }
    printf("|\n");
    
}
