#include <stdio.h>
#include "libft.h"
#include "push_swap.h"
 
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
