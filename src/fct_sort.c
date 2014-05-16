/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernabe <jbernabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/14 16:00:37 by jbernabe          #+#    #+#             */
/*   Updated: 2014/05/16 06:02:38 by jbernabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void		ft_pa(t_swap **la, t_swap **lb)
{
	ft_sort_pb(lb, la);
	// if (*lb != NULL)
	// {
	// 	ft_push_front(la, ft_itoa((*lb)->numb));
	// 	*lb = (*lb)->next;
	// }
	ft_putendl("pa");
}

void		ft_sort_list2(t_swap **la, t_swap **lb)
{
	if ((*la)->numb > (*la)->next->numb)
		ft_sort_pb(la, lb);
	else if ((*la)->numb < (*la)->next->numb)
	{
		ft_sort_sa(la);
	}
	else
	{
		ft_sort_ra(la);
	}
	(void)lb;
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
