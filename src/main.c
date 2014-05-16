/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernabe <jbernabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 17:47:16 by jbernabe          #+#    #+#             */
/*   Updated: 2014/05/16 06:19:06 by jbernabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * hacer una funcio que verifique si esta bien triado o no 
 */
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "push_swap.h"

void		ft_sort_list(t_swap **la, t_swap **lb)
{
	if (ft_is_sort(*la) != 1)
	{
		while ((*la)->next != NULL && (ft_is_sort(*la)) != 1)
		{
			if ((*la)->next && ((*la))->numb && ((*la)->next->numb))
			 	ft_sort_list2(la, lb);
		}
		while ((*lb) != NULL)
			ft_pa(la, lb);
	}
	printf("\nthis is final lb\n");
	ft_printf_list(*lb);	
	printf("this is finla la\n");
	ft_printf_list(*la);
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
