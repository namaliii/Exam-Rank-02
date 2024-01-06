/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op(crazy version).c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 19:04:37 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/06 19:59:50 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        int operation = 0;
        char *firstNum = argv[1];
        char *secondNum = argv[3];
        int fnum = atoi(firstNum);
        int snum = atoi(secondNum);
        if (fnum >= INT_MIN && fnum <= INT_MAX && snum >= INT_MIN && snum <= INT_MAX)
        {
            if (argv[2][0] == '+' || argv[2][0] == '-' || argv[2][0] == '*' || argv[2][0] == '/' || argv[2][0] == '%')
            {
                if (argv[2][0] == '+')
                {
                    operation = fnum + snum;
                    printf("%d", operation);
                }
                else if (argv[2][0] == '-')
                {
                    operation = fnum - snum;
                    printf("%d", operation);
                }
                else if (argv[2][0] == '*')
                {
                    operation = fnum * snum;
                    printf("%d", operation);
                }
                else if (argv[2][0] == '/')
                {
                    operation = fnum / snum;
                    printf("%d", operation);
                }
                else if (argv[2][0] == '%')
                {
                    operation = fnum % snum;
                    printf("%d", operation);
                }
            }
        }
    }
    printf("\n");
}