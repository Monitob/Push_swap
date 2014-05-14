/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   local_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernabe <jbernabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/14 15:02:50 by jbernabe          #+#    #+#             */
/*   Updated: 2014/05/14 18:41:30 by jbernabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int			ft_verify_list(t_swap *l)
{
	t_swap	*temp;
	int		i;

	temp = l;
	i = 0;
	while (temp != NULL)
	{
		if (i > 0)
			return (1);
		temp = temp->next;
		i++;
	}
	return (0);
}

int		ft_verify(char *s)
{
	int	i;

	i = 0;
	if (ft_fast_strlen(s) > 9)
	{
		ft_putendl("int too long");
		exit(0);
	}
	while (s[i] != '\0')
	{
		if (ft_isalpha(s[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}
