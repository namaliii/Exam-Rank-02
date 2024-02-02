/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:53:46 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/13 19:11:49 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    last_word(char *str)
{
    int    j = 0;
    int i = 0;

    while (str[i])
    {
        if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
            j = i + 1;
        i++;
    }
    while (str[j] >= 33 && str[j] <= 127)
    {
        write(1, &str[j], 1);
        j++;
    }
}

int        main(void)
{
    char str[] = "this        ...       is sparta, then again, maybe    not";
    last_word(str);
    write(1, "\n", 1);
    return (0);
}