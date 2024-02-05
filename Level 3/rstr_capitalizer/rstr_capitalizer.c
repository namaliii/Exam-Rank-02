/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:55:43 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/05 19:02:39 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rstr_capitalizer(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z' && str[i + 1] != ' ' && str[i + 1] != '\t')
            str[i] += 32;
        if (str[i] >= 'a' && str[i] <= 'z' && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] -= 32;
        i++;
    }
    write(1, str, i);
}

int main(int argc, char **argv)
{
    int i;
    if (argc >= 2)
    {
        i = 1;
        while (i < argc)
        {
            rstr_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return 0;
}