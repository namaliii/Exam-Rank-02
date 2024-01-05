/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:57:10 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/04 17:03:03 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    if (!*str)
        return (0);
    while (str[i])
        i++;
    return (i);
}

int main(void)
{
    char str[] = "koko";
    int i = ft_strlen(str);
    printf("%d", i);
    return (0);
}