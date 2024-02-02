/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:06:00 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/25 13:21:27 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, unsigned int len)
{
    unsigned int i = 0;
    int result = 0;

    if (len == 0)
        return 0;
    
    result = tab[i];
    while (i < len)
    {
        if (result < tab[i])
            result = tab[i];
        i++;
    }
    return result;
}

#include <stdio.h>

int main(void)
{
    int tab[] = {8, 10, 4, 2, 3, 11};
    unsigned int len = sizeof(tab) / sizeof(tab[0]);

    int maximum = max(tab, len);
    printf("Maximum value in this array is: %d\n", maximum);
    return 0;
}

