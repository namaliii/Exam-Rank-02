/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:31:26 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/07 15:23:02 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return i;
            j++;
        }
        i++;
    }
    return i;
}

int main(void)
{
    char s[] = "Czy zawiera";
    char reject[] = "jakakolwiek";
    size_t myfunction = ft_strcspn(s, reject);
    size_t deffun = strcspn(s, reject);
    printf("My function: %zu\nDefault function: %zu\n", myfunction, deffun);
    return 0;
}
