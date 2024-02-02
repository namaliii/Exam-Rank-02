/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:55:06 by anamieta          #+#    #+#             */
/*   Updated: 2023/12/17 15:46:59 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_writenumber(int num)
{
    if (num > 9)
        ft_writenumber(num / 10);
    char digit = '0' + (num % 10);
    write(1, &digit, 1);
}

int main(void)
{
    int i = 1;

    while (i <= 100)
    {
        int t = i % 3;
        int f = i % 5;
        if (t == 0 && f == 0)
        {
            write(1, "fizzbuzz", 8);
            write(1, "\n", 1);
        }
        else if (t == 0)
        {
            write(1, "fizz", 4);
            write(1, "\n", 1);
        }
        else if (f == 0)
        {
            write(1, "buzz", 4);
            write(1, "\n", 1);
        }
        else
        {
            ft_writenumber(i);
            write(1, "\n", 1);
        }
        i++;
    }
}