#include "../push_swap.h"

void	rotate_a(t_push_swap *s)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = s->pile_a[i];
	while (i < s->int_a - 1)
	{
		s->pile_a[i] = s->pile_a[i + 1];
		i++;
	}
	s->pile_a[i] = tmp;
	if (s->counter == 0)
		ft_printf("ra\n");
}

void	rotate_b(t_push_swap *s)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = s->pile_b[i];
	while (i < s->int_b - 1)
	{
		s->pile_b[i] = s->pile_b[i + 1];
		i++;
	}
	s->pile_b[i] = tmp;
	if (s->counter == 0)
		ft_printf("rb\n");
}

void	rotate_a_b(t_push_swap *s)
{
	s->counter = 1;
	rotate_a(s);
	rotate_b(s);
	printf("rr\n");
	s->counter = 0;
}