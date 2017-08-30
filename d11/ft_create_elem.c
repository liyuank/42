/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 15:47:47 by  L. K.            #+#    #+#             */
/*   Updated: 2017/08/29 17:35:04 by lkuo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list      *ft_create_elem(void    *data)
{
    t_list  *my_list;

    my_list = (t_list   *)malloc(sizeof(*my_list));
    my_list->data = data;
    my_list->next = NULL;
    return (my_list);
}
