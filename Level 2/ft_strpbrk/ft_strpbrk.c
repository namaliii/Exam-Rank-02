/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:02:16 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/09 14:26:14 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;
    while (s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if (s1[i] == s2[j])
                return ((char *)&s1[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    char str[] = "To je stryng";
    char charset[] = "Abcd";
    char *myfun = ft_strpbrk(str, charset);
    char *deffun = strpbrk(str, charset);
    printf("My function: %s\nDefault function: %s\n", myfun, deffun);
    return 0;
}