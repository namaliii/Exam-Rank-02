/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:55:31 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/02 21:09:26 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void str_capitalizer(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
    write(1, &str[i], 1);
    while (str[i])
    {
        i++;
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] -= 32;
        write(1, &str[i], 1);
    }
}

int main(int argc, char **argv)
{
    int i;
    if (argc >= 2)
    {
        i = 1;
        while (i < argc)
        {
            str_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}

