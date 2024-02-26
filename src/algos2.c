#include "../push_swap.h"

void	big_algorithm(t_push_swap *s)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = s->int_a;
	while (((!check_order(s))))
	{
		j = 0;
		while (j < size && (!check_order(s)))
		{
			j++;
			if (((s->pile_a[0] >> i) & 1) == 0)
				push_b(s);
			else
				rotate_a(s);
		}
		while (s->int_b > 0)
			push_a(s);
		i++;
	}
}
