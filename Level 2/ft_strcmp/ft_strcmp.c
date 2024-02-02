/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:02:57 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/09 13:30:04 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (*s1 && *s2)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        else if (s1[i] == s2[i])
            i++;
    }
    return (s1[i] - s2[i]);
}

int main(void)
{
    char s1[] = "Chakalak";
    char s2[] = "Chakalaka";
    int myfunction = ft_strcmp(s1, s2);
    int deffun = strcmp(s1, s2);
    printf("My function: %d\nDefault function: %d\n", myfunction, deffun);
    return 0;
}