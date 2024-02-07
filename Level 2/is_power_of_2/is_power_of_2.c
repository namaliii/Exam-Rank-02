/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:29:20 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/07 16:43:08 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    while (n % 2 == 0)
        n /= 2;
    if (n == 1)
        return 1;
    else
        return 0;
}

int main(void)
{
    int n = 34;
    int check = is_power_of_2(n);
    printf("%d", check);
}
