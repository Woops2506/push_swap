#include "../push_swap.h"

void	free_stacks(t_push_swap *s)
{
	free(s->pile_a);
	free(s->pile_b);
	exit(0);
}
