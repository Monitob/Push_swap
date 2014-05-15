/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernabe <jbernabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 17:47:16 by jbernabe          #+#    #+#             */
/*   Updated: 2014/05/14 21:59:57 by jbernabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * hacer una funcio que verifique si esta bien triado o no 
 */
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "push_swap.h"

int			ft_is_sort(t_swap *list)
{
	t_swap *temp;

	temp = list;
	while
}
void		ft_sort_list(t_swap **la, t_swap **lb)
{
	t_swap	*temp;
	int		is_sort;

	temp = *la;
	is_sort = 0;
	if (ft_verify_list(temp) == 1)
	{
		while (!is_sort)
		{
			is_sort = 1;
			while (temp->next != NULL)
			{
				if ((temp)->numb && (temp)->next->numb && temp)
				{
					ft_sort_list2(&temp, lb, &is_sort);
				}
				temp = temp->next;
			}
		}
	}
	(void)lb;
}

void		ft_get_list(char **av)
{
	int		i;
	t_swap	*la;
	t_swap	*lb;

	la = NULL;
	lb = NULL;
	i = 1;
	while (av[i] != NULL)
	{
		if (ft_verify(av[i]) == 0)
			string_to_list(av[i], &la);
		else
		{
			ft_putendl("Only numbers please");
			exit(0);
		}
		i++;
	}
	ft_sort_list(&la, &lb);
	write(1, "\n", 1);
	ft_printf_list(la);
}

int		main(int ac, char **av)
{
	if (ac <= 1)
	{
		ft_putendl("usage: ./push_swap <numbers>");
		return (-1);
	}
	else
	{
		if (av)
		{
			ft_get_list(av);
			write(1, "\n", 1);
		}	
	}
	return (0);
}
