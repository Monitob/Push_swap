/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernabe <jbernabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/16 03:45:32 by jbernabe          #+#    #+#             */
/*   Updated: 2014/05/16 23:33:00 by jbernabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void		ft_sort_pb(t_swap **la, t_swap **lb)
{
	if (*la != NULL)
	{
		ft_push_front(lb, ft_itoa((*la)->numb));
		*la = (*la)->next;
		ft_putstr("pb ");
	}
	return ;
}

void		ft_push_front(t_swap **l, char *value)
{
	t_swap	*new_el;
	t_swap	*temp;

	new_el = NULL;
	if ((new_el = ft_new_ele(new_el, value)))
	{
		temp = *l;
		*l = new_el;
		new_el->next = temp;
	}
}

t_swap		*ft_new_ele(t_swap *ele, char *s)
{
	if (s)
	{
		if (!(ele = (t_swap *)malloc(sizeof(t_swap))))
			exit(0);
		ele->numb = ft_atoi(s);
		ele->next = NULL;
		ele->prev = NULL;
		return (ele);
	}
	return (NULL);
}

void		string_to_list(char *s, t_swap **head)
{
	t_swap	*new_el;
	t_swap	*temp;

	new_el = NULL;
	temp = NULL;
	new_el = ft_new_ele(*head, s);
	temp = *head;
	if (temp == NULL)
		*head = new_el;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_el;
		new_el->prev = temp;
	}
}

void		ft_printf_list(t_swap *ele)
{
	t_swap	*temp;

	temp = ele;
	while (temp != NULL)
	{
		ft_putnbr(temp->numb);
		ft_putchar('\n');
		temp = temp->next;
	}
}
