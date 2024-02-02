/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:22:14 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/02 18:40:19 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char *s, char c, int index)
{
    int i = 0;
    while(i < index)
    {
        if (s[i] == c)
            return 0;
        i++;
    }
    return 1;
}


int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    if (argc == 3)
    {
        while (argv[1][i])
            i++;
        while (argv[2][j])
        {
            argv[1][i] = argv[2][j];
            i++;
            j++;
        }
        while (k < i)
        {
            if (check(argv[1], argv[1][k], k) == 1)
                write(1, &argv[1][k], 1);
            k++;
        }
    }
    write(1, "\n", 1);
}