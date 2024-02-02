/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:07:11 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/02 20:19:06 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int n;
    if (a == 0 || b == 0)
        return 0;
    if (a > b)
        n = a;
    else
        n = b;
    while (1)
    {
        if (n % a == 0 && n % b == 0)
            return n;
        n++;
    }
}

#include <stdio.h>

int main(void)
{
    unsigned int a = 15;
    unsigned int b = 9;
    unsigned int hopa = lcm(a, b);
    printf("%d", hopa);
    return 0;
}