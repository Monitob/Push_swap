/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernabe <jbernabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/16 03:45:32 by jbernabe          #+#    #+#             */
/*   Updated: 2014/05/16 04:44:50 by jbernabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
}

void		ft_push_front(t_swap **l, char *value)
{
	t_swap	*new_el;

	new_el = NULL;
	if ((new_el = ft_new_ele(new_el, value)))
	{
		if (*l == NULL)
			*l = new_el;
		else
		{
			(*l)->prev = NULL;
			(*l)->prev = new_el;
			new_el->next = *l;
			new_el->prev = NULL;
		}
		(void)new_el;
	}
	
}

t_swap *ft_new_ele(t_swap *ele, char *s)
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

void	string_to_list(char *s, t_swap **head)
{
	t_swap	*new_el;
	t_swap 	*temp;

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
	t_swap *temp;

	temp = ele;
	while (temp != NULL)
	{
		printf("number %d\n", temp->numb);
		temp = temp->next;
	}
}
