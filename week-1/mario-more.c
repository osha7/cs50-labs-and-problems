#include <stdio.h>
#include <cs50.h>

int get_positive_integer(void);
void build_pyramid(int n);


int main(void) 
{
    int positiveInteger = get_positive_integer();
    build_pyramid(positiveInteger);
}

int get_positive_integer(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}

void build_pyramid(int n)
{
    int i = 1;
    while (i <= n)
    {
        int m = i;
        int j = n - i;
        while (j > 0)
        {
            printf(" ");
            j--;
        }
        while (m > 0)
        {
            printf("#");
            m--;
        }
        printf("  ");
        m = i;
        while (m > 0)
        {
            printf("#");
            m--;
        }
        printf("\n");
        i++;
    }
}