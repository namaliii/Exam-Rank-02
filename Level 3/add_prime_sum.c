/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:45:25 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/26 17:31:48 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *s)
{
    int result = 0;
    while (*s)
    {    
        result = result * 10 + (*s - '0');
        s++;
    }
    return result;
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
        i++
    }
    return 1;
}

void put_nbr(int n)
{
    if (n >= 10)
        put_nbr(n / 10);
    char digit = n % 10 + '0';
    write(1, &digit, 1);
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int num = ft_atoi(argv[1]);
        int sum = 0;
        while (num > 0)
        {
            if (is_prime(num))
                sum += num;
            num--;
        }
        put_nbr(sum);
    }
    write(1, "\n", 1);
    return 0;
}