// #include <stdio.h>
// #include <cs50.h>

// int get_positive_integer(void);
// string build_pyramid(int positiveInteger);

// int main(void) 
// {
//     int n = get_positive_integer();
//     // string pyramidLine = build_pyramid(positiveInteger);
//     // printf("%s\n", pyramidLine);
//     int i = 1;
//     while (i <= n)
//     {
//         int m = i;
//         int j = n - i;
//         while (j > 0)
//         {
//             printf(" ");
//             j--;
//         }
//         while (m > 0)
//         {
//             printf("#");
//             m--;
//         }
//         printf("\n");
//         i++;
//     }
// }

// int get_positive_integer(void)
// {
//     int n;
//     do
//     {
//         n = get_int("Height: ");
//     }
//     while (n < 1 || n > 8);
//     return n;
// }

// // string build_pyramid(int n)
// // {
// //     int i = 1;
// //     while (i <= n)
// //     {
// //         int m = i;
// //         int j = n - i;
// //         while (j > 0)
// //         {
// //             printf(" ");
// //             j--;
// //         }
// //         while (m > 0)
// //         {
// //             printf("#");
// //             m--;
// //         }
// //         printf("/n");
// //         i++;
// //     }
   
// // }

#include <stdio.h>
#include <cs50.h>

int get_positive_integer(void);
void build_pyramid(int positiveInteger);

int main(void) 
{
    int positiveInteger = get_positive_integer();
    build_pyramid(positiveInteger);
    // printf("%s\n", pyramidLine);
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
        printf("\n");
        i++;
    }
    
}