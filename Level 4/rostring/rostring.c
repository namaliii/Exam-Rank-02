/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:03:36 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/06 16:28:59 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int start;
    int end;
    char *str;

    if (argc > 1 && argv[1][0])
    {
        str = argv[1];
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        start = i;
        while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
            i++;
        end = i;
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        while (str[i])
        {
            if (str[i] == ' ' || str[i] == '\t')
            {
                while (str[i] == ' ' || str[i] == '\t')
                    i++;
                write(1, " ", 1);
            }
            else
                write(1, &str[i], 1);
            i++;
        }
        if (str[end])
            write(1, " ", 1);
        while (str[start] != ' ' && str[start] != '\t' && str[start] != '\0')
        {
            write(1, &str[start], 1);
            start++;
        }
    }
    else
        write(1, "\n", 1);
}

