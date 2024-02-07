/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:41:23 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/07 15:44:53 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return ((char *)&s[i]);
        i++;
    }
    return 0;
}

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    while (s[i])
    {
        if (ft_strchr(accept, s[i]) == 0)
            break;
        i++;
    }
    return i;
}

int main(void)
{
    char str[] = "Aho, let me be free";
    char check[] = "";
    size_t myfun = ft_strspn(str, check);
    size_t deffun = strspn(str, check);
    printf("My function: %zu\nDefault function: %zu\n", myfun, deffun);
    return 0;
}
