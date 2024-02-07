/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:28:13 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/07 15:36:43 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    int length = 0;
    char temp;
    while (str[length])
    {
        length++;
    }
    while (i < length / 2)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
        i++;
    }
    return ((char *)str);
}

int main(void)
{
    char str[] = "Proba generalna";
    char *reversed = ft_strrev(str);
    printf("Reversed string: %s\n", reversed);
    return 0;
}
