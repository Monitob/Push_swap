#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct		s_swap
{
	int				numb;
	struct	s_swap	*next;
	struct	s_swap	*prev;
}					t_swap;

void		ft_pa(t_swap **la, t_swap **lb);
void		ft_push_front(t_swap **l, char *value);
void		ft_sort_list2(t_swap **la, t_swap **lb);
void		ft_sort_pb(t_swap **la, t_swap **lb);
int			ft_last_element(t_swap *la);
void		ft_get_list(char **av);
int			ft_verify(char *s);
void		string_to_list(char *s, t_swap **head);
t_swap		*ft_new_ele(t_swap *ele, char *s);
void		ft_printf_list(t_swap *ele);
int			ft_verify_list(t_swap *l);
void		ft_sort_sa(t_swap **la);
void		ft_sort_list(t_swap **la, t_swap **lb);
void		ft_sort_ra(t_swap **la);
int			ft_is_sort(t_swap *list);

#endif
