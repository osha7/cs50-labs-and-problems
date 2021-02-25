#include <stdio.h>
#include <cs50.h>

int get_start_int(void);
int get_end_int(int startSize);

int main(void)
{

    int startSize = get_start_int();
    int endSize = get_end_int(startSize);
    
    int population = startSize;
    int counter = 0;
    
    while (population < endSize)
    {
        int births = population / 3;
        int deaths = population / 4;
        population = population + births - deaths;
        counter++;
    }
    // int growthSize = endSize - startSize;
    // int differencePopulation = births - deaths;

    printf("Years: %i\n", counter);

}

int get_start_int(void)
{
    int n;
    do
    {
        n = get_int("Start size: ");
    }
    while (n < 9);
    return n;
}

int get_end_int(startSize)
{
    int m;
    do
    {
        m = get_int("End size: ");
    }
    while (m < startSize);
    return m;
}