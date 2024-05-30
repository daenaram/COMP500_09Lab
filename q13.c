#include <stdio.h>

void draw_triangle(int h);
void draw_toptriangle(int h);
void draw_basetriangle(int h);

void draw_triangle(int h) {
    
    draw_toptriangle(h);
    draw_basetriangle(h);
    
}

void draw_toptriangle(int h)
{
    for ( int i = 1; i < h; i++)
    {
        for ( int j = 0; j < h - i; j++)
        {
            printf (" ");
        }
        printf("/");
        for ( int j = 0; j < ( i - 1 ) * 2; j++ ) 
        {
                printf(" ");
        }
        printf("\\\n");

    }
    
}

void draw_basetriangle(int h)
{
    printf("/");
    for ( int i = 0; i < ( h - 1) * 2; i++) {
        printf("_");
    }
    printf("\\\n");
    
}
int main (void) {
    int h;


    printf("enter height:\n");
    scanf("%d", &h);

    if (h <= 0)
    {
        return 0;
    }
    else
    {
    draw_triangle(h);
    }
    return 0;
    
}
