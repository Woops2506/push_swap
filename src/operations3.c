#include "../push_swap.h"

void	reverse_rotate_a(t_push_swap *s)
{
	int	tmp;
	int	i;

	i = s->int_a - 1;
	tmp = s->pile_a[i];
	while (i > 0)
	{
		s->pile_a[i] = s->pile_a[i - 1];
		i--;
	}
	s->pile_a[i] = tmp;
	if (s->counter == 0)
		ft_printf("rra\n");
}

void	reverse_rotate_b(t_push_swap *s)
{
	int	tmp;
	int	i;

	i = s->int_b - 1;
	tmp = s->pile_b[i];
	while (i > 0)
	{
		s->pile_b[i] = s->pile_b[i - 1];
		i--;
	}
	s->pile_b[i] = tmp;
	if (s->counter == 0)
		ft_printf("rra\n");
}

void	reverse_rotate_a_b(t_push_swap *s)
{
	s->counter = 1;
	reverse_rotate_a(s);
	reverse_rotate_b(s);
	printf("rrr\n");
	s->counter = 0;
}