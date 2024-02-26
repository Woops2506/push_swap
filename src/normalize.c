#include "../push_swap.h"

void	normalize(t_push_swap *s)
{
	int		i;
	int		j;
	int		count;

	init_stack(s);
	i = -1;
	while (++i < s->int_a)
		s->tmp[i] = s->pile_a[i];
	i = 0;
	while (i < s->int_a)
	{
		j = -1;
		count = -1;
		while (++j < s->int_a)
		{
			if (s->tmp[i] < s->tmp[j])
				count++;
		}
		s->pile_a[i] = ((s->int_a - 1) - count);
		i++;
	}
	free(s->tmp);
}
