/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:42:33 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/31 19:42:34 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    char *str;
    int i;
    int start;
    int end;
    int flag;

    if (argc == 2)
    {
        str = argv[1];
        i = 0;
        while (str[i])
            i++;
        while (i >= 0)
        {
            i--;
            end = i;
            while (str[i] && str[i] != ' ' && str[i] != '\t')
                i--;
            start = i + 1;
            flag = start;
            while (start <= end)
            {
                write(1, &str[start], 1);
                start++;
            }
            if (flag != 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}
