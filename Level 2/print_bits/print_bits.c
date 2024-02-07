/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:22:47 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:30 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i = 8;

    while (i > 0)
    {
        i--;
        char bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }
}

int main(void)
{
    unsigned char hophop = 'a';
    print_bits(hophop);
    return 0;
}
