/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:07:07 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/02 19:11:43 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    char *str;
    int i = 0;
    if (argc == 2)
    {
        str = argv[1];
        while (str[i])
        {
            while (str[i] && (str[i] == ' ' || str[i] == '\t'))
                i++;
            while (str[i] && str[i] != ' ' && str[i] != '\t')
            {
                write(1, &str[i], 1);
                i++;
            }
            while (str[i] && (str[i] == ' ' || str[i] == '\t'))
                i++;
            if (str[i] != '\0')
            {
                i--;
                write(1, " ", 1);
            }
        }
    }
    write(1, "\n", 1);
}