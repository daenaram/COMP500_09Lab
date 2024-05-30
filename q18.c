#include <stdio.h>

char to_lowercase(char letter);

int main(void)
{
    char input;

    printf("Please input a letter: \n");

    scanf("%c", &input);

    printf("%c's lowercase is %c\n", input, to_lowercase(input));

    return 0;
}

char to_lowercase(char letter)
{
    if (letter >= 'A' && letter <= 'Z'){
        letter = letter + ('a' - 'A');
        return letter;
    }
    else {
        return 0;
    }
}
