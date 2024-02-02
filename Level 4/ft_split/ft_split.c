/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:05:52 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/31 20:23:56 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strncpy(char *dst, char *src, int n)
{
    int i = 0;
    while (src[i] && i < n)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
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
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
    }
    char **array = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (array == NULL)
        return NULL;
    i = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
        if (i > j)
        {
            array[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
            ft_strncpy(array[k], &str[j], i - j);
            k++;
        }
    }
    array[k] = NULL;
    return array;
}

// #include <stdio.h>

// // Function prototypes
// char *ft_strncpy(char *s1, char *s2, int n);
// char **ft_split(char *str);

// int main() {
//     // Example usage of ft_split
//     char input_str[] = "  This is a test string   ";
//     char **result = ft_split(input_str);

//     // Print the result
//     printf("Original String: \"%s\"\n", input_str);
//     printf("Split String:\n");

//     // Iterate through the array of strings
//     for (int i = 0; result[i] != NULL; ++i) {
//         printf("[%d]: \"%s\"\n", i, result[i]);
//         free(result[i]); // Free each individual string
//     }

//     // Free the array itself
//     free(result);

//     return 0;
// }