#include "../push_swap.h"

void	check_non_num(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == '-' || str[i] == '+') && ft_isdigit(str[i + 1]))
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			error();
		i++;
	}
}

void	check_doubles(int *tab, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[i] == tab[j])
				error();
			j++;
		}
		i++;
	}
}

void	check_max_min(char *str)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	while (str[i])
	{
		if (str[0] == '-')
		{
			if (len > 11)
				error();
			if (len == 11 && ft_strncmp("-2147483648", str, 11) < 0)
				error();
		}
		else
		{
			if (len > 10)
				error();
			if (len == 10 && ft_strncmp("2147483647", str, 10) < 0)
				error();
		}
	i++;
	}
}

int	check_order(t_push_swap *s)
{
	int	i;

	i = 0;
	while (i < s->int_a - 1)
	{
		if (s->pile_a[i] > s->pile_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
