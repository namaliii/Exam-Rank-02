/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:40:01 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/08 19:02:04 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        if (str[i + 1] == '-' || str[i + 1] == '+')
            return 0;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

int main(void)
{
    char str[] = "---1234";
    int myfunction = ft_atoi(str);
    int defatoi = atoi(str);
    printf("My function: %d\nDefault function: %d\n", myfunction, defatoi);
    return 0;
}
