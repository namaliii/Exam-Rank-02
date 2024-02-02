/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:25:07 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/02 20:53:46 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n1;
    int n2;
    int i = 0;
    if (argc == 3)
    {
        n1 = atoi(argv[1]);
        n2 = atoi(argv[2]);
        if (n1 < 0 || n2 < 0 || n1 > 2147483647 || n2 > 2147483647)
            return 0;
        while (n1 != n2)
        {
            if (n1 > n2)
                n1 = n1 - n2;
            else
                n2 = n2 - n1;
        }
        printf("%d", n1);
    }
    printf("\n");
    return 0;
}
