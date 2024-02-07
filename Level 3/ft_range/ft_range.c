#include <stdlib.h>

int *ft_range(int start, int end)
{
    int len = abs(start - end) + 1;
    int *array = (int *)malloc(sizeof(int) * len);
    int i = 0;
    while (i < len)
    {
        if (start < end)
        {
            array[i] = start;
            start++;
            i++;
        }
        else
        {
            array[i] = start;
            start--;
            i++;
        }
    }
    return (array);
}

// #include <stdio.h>

// int main(void)
// {
//     int *array = ft_range(0, -3);
//     int i = 0;
//     while (i < 4)
//     {
//         printf("%d, ", array[i]);;
//         i++;    
//     }
//     return 0;
// }
