/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:34:24 by anamieta          #+#    #+#             */
/*   Updated: 2024/01/31 19:45:08 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_list.h"
#include <stdlib.h>

t_list *sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swap;
    t_list *tmp;

    tmp = lst;
    while (lst->next != NULL)
    {
        if (((*cmp)(lst->data, lst->next->data)) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return lst;
}