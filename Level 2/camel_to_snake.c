/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:33:40 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/06 19:00:42 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
   int i = 0;
   int upCaseCounter = 0;
   if (argc == 2)
   {
        char *str = argv[1];
        while (str[i])
        {
            char current = str[i];
            if (current >= 'A' && current <= 'Z')
            {
                upCaseCounter++;
            }
            i++;
        }
        int snakeCaseLength = i + upCaseCounter + 1;
        char *snakeCaseStr = (char *)malloc(snakeCaseLength);
        if (snakeCaseStr == NULL)
        {
            write(1, "Memory allocation failed\n", 25);
            return 1;
        }
        int snakeCaseIndex = 0;
        i = 0;
        while (str[i])
        {
            char current = str[i];
            if (current >= 'A' && current <= 'Z')
            {
                snakeCaseStr[snakeCaseIndex] = '_';
                snakeCaseStr[snakeCaseIndex + 1] = current + 32;
                snakeCaseIndex++;
            }
            else
            {
                snakeCaseStr[snakeCaseIndex] = current;
            }
            snakeCaseIndex++;
            i++;
        }
        snakeCaseStr[snakeCaseIndex] = '\0';
        write(1, snakeCaseStr, snakeCaseLength);
        free(snakeCaseStr);
   }
}
