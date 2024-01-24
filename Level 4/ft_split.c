/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:05:52 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/24 16:28:03 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
    int i = 0;
    while (i < n && s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int word_count = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            word_count++;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' || str[i] != '\n'))
            i++;
    }
    char **array = (char **)malloc(sizeof(char *) * (word_count + 1));
    i = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
        if (i > j)
        {
            array[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
            ft_strncpy(array[k], &str[j], i - j);
            k++;
        }
    }
    array[k] = NULL;
    return (array);
}
