/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:42:24 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/07 20:30:26 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    char *s1;
    char *s2;

    if (argc == 3)
    {
        s1 = argv[1];
        s2 = argv[2];
        int i = 0;
        int j = 0;
        while (s1[i] && s2[j])
        {
            if (s2[j] == s1[i])
                i++;
            j++;
        }
        if (s1[i] == '\0')
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return 0;
}
