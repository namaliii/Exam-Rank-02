/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:44:21 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/05 17:01:53 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 4)
    {
        char *str = argv[1];
        while (str[i])
        {
            char current = str[i];
            if (argv[2][0] && !argv[2][1] && argv[3][0] && !argv[3][1])
            {
                if (current == argv[2][0])
                    current = argv[3][0];
                write(1, &current, sizeof(char));
            }
            i++;
        }
    }
    write(1, "\n", sizeof(char));
}