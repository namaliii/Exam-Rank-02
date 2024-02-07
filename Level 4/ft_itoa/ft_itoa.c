/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:12:12 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/06 19:55:45 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n)
{
	if(n == -2147483648)
		return("-2147483648\0");
    int nbr = n;
    int len = 0;
    if (n < 0)
        len++;
    while (nbr)
    {
        nbr /= 10;
        len++;
    }
    char *s = (char *)malloc(sizeof(char) * (len + 1));
    if (s == NULL)
        return NULL;
    s[len] = '\0';
    if (n < 0)
    {
        s[0] = '-';
        n = -n;
    }        
    if (n == 0)
    {
        s[0] = '0';
        return s;
    }
    while (n)
    {
        len--;
        s[len] = n % 10 + '0';
        n /= 10;
    }
    return s;
}

// #include <stdio.h>
// int main(void)
// {
// 	int n = -53778;
// 	char *str;

// 	str = ft_itoa(n);
// 	printf("%s", str);
// 	return 0;
// }
