/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:13:54 by anamieta          #+#    #+#             */
/*   Updated: 2024/02/06 18:49:55 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *lst_ptr = *begin_list;

    if (begin_list == NULL || *begin_list == NULL)
        return ;
    if (cmp(lst_ptr->data, data_ref) == 0)
    {
        *begin_list = lst_ptr->next;
        free(lst_ptr);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
    {
        lst_ptr = *begin_list;
        ft_list_remove_if(&lst_ptr->next, data_ref, cmp);
    }
}

// #include <stdio.h>
// #include <string.h>

// void	print_list(t_list **begin_list)
// {
// 	t_list *cur = *begin_list;
// 	while (cur != 0)
// 	{
// 		printf("%s\n", cur->data);
// 		cur = cur->next;
// 	}
// }

// int		main(void)
// {
// 	char straa[] = "String aa";
// 	t_list *aa = malloc(sizeof(t_list));
// 	aa->next = 0;
// 	aa->data = straa;

// 	char strbb[] = "String bb";
// 	t_list *bb = malloc(sizeof(t_list));
// 	bb->next = 0;
// 	bb->data = strbb;

// 	char strcc[] = "String cc";
// 	t_list *cc = malloc(sizeof(t_list));
// 	cc->next = 0;
// 	cc->data = strcc;

// 	char strdd[] = "String dd";
// 	t_list *dd = malloc(sizeof(t_list));
// 	dd->next = 0;
// 	dd->data = strdd;

// 	aa->next = bb;
// 	bb->next = cc;
// 	cc->next = dd;

// 	t_list **begin_list = &aa;

// 	print_list(begin_list);
// 	printf("----------\n");
// 	ft_list_remove_if(begin_list, straa, strcmp);
// 	print_list(begin_list);
// }