/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:42:24 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/07 17:55:54 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;

    if (argc == 3)
    {
        while (argv[2][j])
        {    
            if (argv[2][j] == argv[1][i])
                i++;
            j++;
        }
        if (!argv[1][i])
                write(1, argv[1], i);
    }
    write(1, "\n", 1);
    return 0;
}
