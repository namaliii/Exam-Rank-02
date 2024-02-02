/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:13:33 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/02 19:39:14 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return c;
}

int get_digit(char c, int digits_in_base)
{
    int max_digit;
    if (digits_in_base <= 10)
        max_digit = digits_in_base + '0';
    else
        max_digit = digits_in_base - 10 + 'a';

    if (c >= '0' && c <= '9' && c <= max_digit)
        return (c - '0');
    else if (c >= 'a' && c <= 'f' && c <= max_digit)
        return (10 + c - 'a');
    else
        return (-1);
}


int ft_atoi_base(const char *str, int str_base)
{
    int digit;
    int result = 0;
    int sign = 1;
    int i = 0;
    
    while (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while ((digit = get_digit(to_lower(str[i]), str_base)) >= 0)
    {
        result = result * str_base + digit * sign;
        i++;
    }
    return result;
}

// #include <stdio.h>

// int main() {
//     // Test cases
//     const char *hex_str = "1a";
//     const char *bin_str = "1101";
//     const char *oct_str = "17";
    
//     int hex_result = ft_atoi_base(hex_str, 16);
//     int bin_result = ft_atoi_base(bin_str, 2);
//     int oct_result = ft_atoi_base(oct_str, 8);

//     printf("Hexadecimal %s in base 16 is: %d\n", hex_str, hex_result);
//     printf("Binary %s in base 2 is: %d\n", bin_str, bin_result);
//     printf("Octal %s in base 8 is: %d\n", oct_str, oct_result);

//     return 0;
// }