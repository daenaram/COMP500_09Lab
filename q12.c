#include <stdio.h>

int is_positive(int input);
int is_negative(int input);
int is_zero(int input);

int main()
{
    int input;
    printf(">\n");
    scanf("%d", &input);
    printf("Calling is_positive: %d\n", is_positive(input));
    printf("Calling is_negative: %d\n", is_negative(input));
    printf("Calling is_zero: %d", is_zero(input));
    

}

int is_positive(int input)
{
    if(input > 0)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}
int is_negative(int input)
{
    if(input < 0)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}
int is_zero(int input)
{
    if(input == 0)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}
