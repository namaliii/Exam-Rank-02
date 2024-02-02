/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:42:24 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/02 19:01:13 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    char *s1 = argv[1];
    char *s2 = argv[2];
    if (argc == 3)
    {
        while (s1[i])
        {
            j = 0;
            while (s2[j])
            {
                if (s1[i] == s2[j])
                {
                    write(1, &s1[i], 1);
                    break ;
                }
                else
                    j++;
            }
            i++;
        }
    }
}