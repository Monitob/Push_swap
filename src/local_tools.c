#include "libft.h"
#include "push_swap.h"

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