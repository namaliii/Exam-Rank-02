/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:45:25 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/27 14:29:09 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    while (str[i])
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result);
}

int is_prime(int nbr)
{
    int i = 2;
    if (nbr <= 1)
        return 0;
    while (i * i <= nbr)
    {
        if (nbr % i == 0)
            return 0;
        i++;
    }
    return 1;
}

void put_nbr(int num)
{
    if (num >= 10)
        put_nbr(num / 10);
    char digit = num % 10 + '0';
    write(1, &digit, 1);
}

int main(int argc, char **argv)
{
    int sum = 0;
    if (argc == 2)
    {
        int nbr = ft_atoi(argv[1]);
        while (nbr > 0)
        {
            if (is_prime(nbr))
                sum += nbr;
            nbr--;
        }
    }
    put_nbr(sum);
    write(1, "\n", 1);
    return 0;
}
