/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:44:51 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/04 20:10:38 by anamieta         ###   ########.fr       */
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
                if ((current >= 'a' && current <= 'm') || (current >= 'A' && current <= 'M'))
                    current = current + 13;
                else
                    current = current - 13;
            }
            write(1, &current, sizeof(char));
            i++;
        }
    }
    write(1, "\n", sizeof(char));
}
