/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:25:02 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/01 13:38:08 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
    int result;
    int i = 0;
    while (str[i])
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
}
void print_hex(int n)
{
    char hex = "0123456789abcdef";
    if (n >= 16)
        print_hex(n / 16);
    write(1, &hex[n % 16], 1)
}

int main(int argc, char **argv)
{
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
}
