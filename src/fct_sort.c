/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernabe <jbernabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/14 16:00:37 by jbernabe          #+#    #+#             */
/*   Updated: 2014/05/16 23:35:17 by jbernabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int			is_min(t_swap *p)
{
	t_swap	*q;
	int		min;

	q = p;
	if (q == NULL)
		return (0);
	min = q->numb;
	q = q->next;
	while (q != NULL)
	{
		if (min > q->numb)
			return (0);
		q = q->next;
	}
	return (1);
}

void		ft_pa(t_swap **la, t_swap **lb)
{
	ft_sort_pb(lb, la);
	ft_putstr("pa ");
}

void		ft_sort_list2(t_swap **la, t_swap **lb)
{
	if (is_min(*la))
		ft_sort_pb(la, lb);
	else if (is_min((*la)->next))
		ft_sort_sa(la);
	else
		ft_sort_ra(la);
	return ;
}

void		ft_sort_sa(t_swap **la)
{
	int		tmp;

	tmp = (*la)->numb;
	(*la)->numb = (*la)->next->numb;
	(*la)->next->numb = tmp;
	ft_putstr("sa ");
}

void		ft_sort_ra(t_swap **la)
{
	t_swap	*temp;

	if ((*la)->next != NULL)
	{
		temp = *la;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = *la;
		*la = (*la)->next;
		(temp->next)->next = NULL;
		ft_putstr("ra ");
	}
}
