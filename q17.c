#include <stdio.h>

void print_ascii_rectangle(char symbol, int width, int height);

int main(void)
{
    char symbol;
    int width, height;

    printf("Please enter an ASCII symbol:\n");
    scanf(" %c", &symbol);
    printf("Please enter the width:\n");
    scanf("%d", &width);
    printf("Please enter the height:\n");
    scanf("%d", &height);
    print_ascii_rectangle(symbol, width, height);

    return 0;
}

void print_ascii_rectangle(char symbol, int width, int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
}
