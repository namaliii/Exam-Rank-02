/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:03:58 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/31 19:04:35 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int start, int end)
{
    int len = abs(end - start) + 1;
    int *array = (int *)malloc(sizeof(int) * len);
    int i = 0;
    while (i < len)
    {
        if (start > end)
        {
            array[i] = end;
            end++;
            i++;
        }
        else
        {
            array[i] = end;
            end--;
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

