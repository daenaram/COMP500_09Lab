#include <stdio.h>

void draw_inverted_triangle(int h);
void draw_toptriangle(int h);
void draw_basetriangle(int h);

void draw_inverted_triangle(int h) {
    draw_basetriangle(h);
    draw_toptriangle(h);
}

void draw_toptriangle(int h)
{
    for (int i = h - 1; i >= 1; i--)
    {
        for (int j = 0; j < h - i; j++) // printing blank spaces
        {
            printf(" ");
        }
        printf("\\"); 
        
        for (int j = 0; j < (i - 1) * 2; j++)
        {
            printf(" "); // printing blank space on right side
        }
        printf("/\n");
    }
}

void draw_basetriangle(int h)
{
    // First print the underscores
   
    for (int i = 0; i < h * 2; i++) {
        printf("_");
    }
    printf("\n");
    
    // Then print the slashes below the underscores
    printf("\\");
    for (int i = 0; i < (h - 1) * 2; i++) {
        printf(" ");
    }
    printf("/\n");
}

int main(void) {
    int h;

    printf("enter height:\n");
    scanf("%d", &h);

    if (h <= 0)
    {
        return 0;
    }
    else
    {
        draw_inverted_triangle(h);
    }
    return 0;
}
