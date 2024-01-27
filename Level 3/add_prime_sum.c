/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:45:25 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/27 18:24:43 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *s)
{
    int i = 0;
    int result = 0;
    while (s[i])
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }
    return (result);
}

int is_prime(int num)
{
    int i = 2;
    if (num <= 1)
        return 0;
    while (i * i <= num)
    {
        if (num % i == 0)
            return 0;
        i++;
    }
    return 1;
}

void put_nbr(int nbr)
{
    if (nbr >= 10)
        put_nbr(nbr / 10);
    char digit = nbr % 10 + '0';
    write(1, &digit, 1);
}

int main(int argc, char **argv)
{
    int sum = 0;
    if (argc == 2)
    {
        int n = ft_atoi(argv[1]);
        while (n > 0)
        {
            if (is_prime(n))
                sum += n;
            n--;
        }
    }
    put_nbr(sum);
    write(1, "\n", 1);
}
