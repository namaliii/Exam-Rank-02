/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:41:29 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/02 19:41:49 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
    if (begin_list == 0)
        return 0;
    int i = 1;
    while (begin_list->next != NULL)
    {
        begin_list = begin_list->next;
        i++;
    }
    return i;
}
