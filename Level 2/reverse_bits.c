/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:29:09 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/25 18:22:33 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void reverse_byte(unsigned char octet)
{
	int	i = 0;
	unsigned char 	bit;

	while (i < 8)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
        i++;
	}
}

int main(void)
{
    unsigned char octet = 38;
    reverse_byte(octet);
    return 0;
}