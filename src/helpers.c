#include "../push_swap.h"

void	create_stacks(t_push_swap *ps)
{
	ps->pile_a = malloc(ps->int_a * sizeof(int));
	if (!ps->pile_a)
		error();
	ps->pile_b = malloc(ps->int_a * sizeof(int));
	if (!ps->pile_b)
		error();
}

void	init_stack(t_push_swap *s)
{
	int		size;
	int		i;

	s->tmp = malloc(sizeof(long) * s->int_a);
	i = 0;
	size = s->int_a;
	while (i < size)
	{
		s->tmp[i] = s->pile_a[i];
		i++;
	}
}
