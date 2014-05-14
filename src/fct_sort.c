/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernabe <jbernabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/14 16:00:37 by jbernabe          #+#    #+#             */
/*   Updated: 2014/05/14 20:01:01 by jbernabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void		ft_sort_sa(t_swap **la)
{
	int		tmp;

	tmp = (*la)->numb;
	(*la)->numb = (*la)->next->numb;
	(*la)->next->numb = tmp;
}

void		ft_sort_ra(t_swap **la)
{
	int		tmp;
	t_swap	*temp_list;

	temp_list = *la;
	tmp = (*la)->numb;
	while (temp_list->next != NULL)
		temp_list = temp_list->next;
	(*la)->numb = (temp_list)->numb;
	temp_list->numb = tmp;
}
