#include "../push_swap.h"

void	three_alg_help(t_push_swap *s)
{
	rotate_a(s);
	swap_a(s);
	reverse_rotate_a(s);
}

void	push_up(t_push_swap *s)
{
	if (s->small_i < (s->int_a / 2))
	{
		s->i = 0;
		while (s->i < s->small_i)
		{
			rotate_a(s);
			s->i++;
		}
	}
	else if (s->small_i >= (s->int_a / 2))
	{
		s->i = s->int_a;
		while (s->i > s->small_i)
		{
			reverse_rotate_a(s);
			s->i--;
		}
	}
}

void	find_smallest(t_push_swap *s)
{
	s->i = 1;
	s->small_i = 0;
	s->min = s->pile_a[0];
	while (s->i < s->int_a)
	{
		if (s->pile_a[s->i] < s->min)
		{
			s->min = s->pile_a[s->i];
			s->small_i = s->i;
			s->i = 1;
		}
		s->i++;
	}
}