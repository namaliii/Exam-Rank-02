/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:04:05 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/05 20:23:42 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

void ft_putnbr(int n)
{
    char digit;
    if (n == -2147483648)
    {
        write(1, "-", 1);
        write(1, "2", 1);
        n = n % 1000000000 * -1;
    }
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n / 10);
    digit = n % 10 + '0';
    write(1, &digit, 1);
}

int main(int argc, char **argv)
{
    int i;
    int nb;
    if (argc == 2)
    {
        i = 1;
        nb = ft_atoi(argv[1]);
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nb);
            write(1, " = ", 3);
            ft_putnbr(nb * i);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return 0;
}