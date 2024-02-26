#include "../push_swap.h"

void	swap_a(t_push_swap *s)
{
	int	tmp;

	if (s->int_a > 1)
	{
		tmp = s->pile_a[0];
		s->pile_a[0] = s->pile_a[1];
		s->pile_a[1] = tmp;
	}
	if (s->counter == 0)
		ft_printf("sa\n");
}

void	swap_b(t_push_swap *s)
{
	int	tmp;

	if (s->int_b > 1)
	{
		tmp = s->pile_b[0];
		s->pile_b[0] = s->pile_b[1];
		s->pile_b[1] = tmp;
	}
	if (s->counter == 0)
		ft_printf("sb\n");
}

void	swap_a_b(t_push_swap *s)
{
	s->counter = 1;
	swap_a(s);
	swap_b(s);
	ft_printf("ss\n");
	s->counter = 0;
}

void	push_a(t_push_swap *s)
{
	int	i_a;
	int	i_b;

	i_b = 0;
	if (s->int_b > 0)
	{
		s->int_a += 1;
		i_a = s->int_a;
		while (--i_a > 0)
			s->pile_a[i_a] = s->pile_a[i_a - 1];
		s->pile_a[i_a] = s->pile_b[i_a];
		s->int_b -= 1;
		i_b = s->int_b;
		while (i_a < i_b)
		{
			s->pile_b[i_a] = s->pile_b[i_a + 1];
			i_a++;
		}
		s->pile_b[i_a] = 0;
		ft_printf("pa\n");
	}
}

void	push_b(t_push_swap *s)
{
	int	i_a;
	int	i_b;

	i_a = 0;
	if (s->int_a > 0)
	{
		s->int_b += 1;
		i_b = s->int_b;
		while (--i_b > 0)
			s->pile_b[i_b] = s->pile_b[i_b - 1];
		s->pile_b[i_b] = s->pile_a[i_b];
		s->int_a -= 1;
		i_a = s->int_a;
		while (i_b < i_a)
		{
			s->pile_a[i_b] = s->pile_a[i_b + 1];
			i_b++;
		}
		s->pile_a[i_b] = 0;
		ft_printf("pb\n");
	}
}