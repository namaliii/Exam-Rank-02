/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:17:11 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/05 17:18:57 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_reversecase(char *str)
{
    int i = 0;
    if (!str)
        return ;
    while (str && str[i] != '\0')
    {
        char makelow = str[i] + 32;
        char makeup = str[i] - 32;
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                write(1, &(makelow), 1);
            else if (str[i] >= 'a' && str[i] <= 'z')
                write(1, &(makeup), 1);
            i++;
        }
        else
        {
            write(1, &(str[i]), 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
