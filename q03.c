#include <stdio.h>

void draw_horizontal(char corner_char, char horizontal_char, int width);
void draw_vertical(char corner_char, char vertical_char, int width, int height);
void draw_ascii_box(char corner_char, char horizontal_char, char vertical_char, int width, int height);

int main(void)
{
    char horizontal_char, vertical_char, corner_char;
    int width;
    int height;
    
    scanf(" %c", &horizontal_char);
    scanf(" %c", &vertical_char);
    scanf(" %c", &corner_char);
    scanf("%d", &width);
    scanf("%d", &height);
    
    draw_ascii_box(corner_char, horizontal_char, vertical_char, width, height);
    return 0;
}

void draw_ascii_box(char corner_char, char horizontal_char, char vertical_char, int width, int height)
{
    draw_horizontal(corner_char, horizontal_char, width);
    draw_vertical(corner_char, vertical_char, width, height);
    draw_horizontal(corner_char, horizontal_char, width);
}

void draw_horizontal(char corner_char, char horizontal_char, int width)
{
    printf("%c", corner_char);
    
    for (int i = 0; i < (width - 2); i++)
    {
        printf("%c", horizontal_char);
    }
    
    printf("%c\n", corner_char);
    
}

void draw_vertical(char corner_char, char vertical_char, int width, int height)
{
    for (int j = 0; j < (height - 2); j++)
    {
        printf("%c", vertical_char);
        for (int k = 0; k < (width - 2); k++)
        {
            printf(" ");
        }
        printf("%c\n", vertical_char);
        
    }
    
    
    
}
