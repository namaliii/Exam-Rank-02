/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:25:50 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/05 18:05:44 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        char *str = argv[1];
        while (str[i])
        {
            char current = str[i];
            if ((current >= 'a' && current <= 'z') || (current >= 'A' && current <= 'Z'))
            {
                if (current >= 'a' && current <= 'z')
                    current = 'z' - current + 'a';
                else if (current >= 'A' && current <= 'Z')
                    current = 'Z' - current + 'A';
                write(1, &current, sizeof(char));
            }
            else
                write(1, &current, sizeof(char));
            i++;
        }
    }
    write(1, "\n", sizeof(char));
}