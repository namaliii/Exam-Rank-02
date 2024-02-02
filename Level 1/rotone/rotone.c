/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:24:32 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/05 16:36:18 by anamieta         ###   ########.fr       */
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
                if (current == 'z')
                    current = 'a';
                else if (current == 'Z')
                    current = 'A';
                else
                    current = current + 1;
            }
            write(1, &current, sizeof(char));
            i++;
        }
    }
    write(1, "\n", sizeof(char));
}