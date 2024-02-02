/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:52:14 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/09 14:01:12 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int length = 0;
    int i = 0;
    char *strcpy;
    while (src[length])
    {
        length++;
    }
    strcpy = (char *)malloc(length + 1);
    if (strcpy == NULL)
        return NULL;
    while (src[i])
    {
        strcpy[i] = src[i];
        i++;
    }
    strcpy[i] = '\0';
    return strcpy;
}

int main(void)
{
    char string[] = "";
    char *mycpy = ft_strdup(string);
    char *defcpy = strdup(string);
    printf("My function: %s\nDefault function: %s\n", mycpy, defcpy);
    free(mycpy);
    free(defcpy);
    return 0;
}