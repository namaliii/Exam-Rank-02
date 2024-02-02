/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:14:02 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/04 19:29:28 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char **argv)
{
    char current;
    char baseChar;
    int index;
    int i = 0;
    if (argc == 2)
    {
        char *str = argv[1];
        while (str[i])
        {
            current = str[i];
            if ((current >= 'A' && current <= 'Z') || (current >= 'a' && current <= 'z'))
            {
                if (current >= 'a')
                    baseChar = 'a';
                else
                    baseChar = 'A';
                index = current - baseChar + 1;
                while (index > 0)
                {
                    write(1, &current, sizeof(char));
                    index--;
                }
            }
            else
                write(1, &current, sizeof(char));
                i++;
        }
    }
    write(1, "\n", sizeof(char));
}