/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareurin <mareurin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:51:10 by mareurin          #+#    #+#             */
/*   Updated: 2023/11/13 17:40:47 by mareurin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(int n)
{
	int	counter;

	counter = 0;
	if (n < 0 || n == 0)
		counter++;
	while (n && ++counter)
		n /= 10;
	return (counter);
}

char	*ft_itoa(int n)
{
	char		*new;
	int			len;
	const char	*digits;

	digits = "0123456789";
	len = get_length(n);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (0);
	new[len] = 0;
	if (n == 0)
		new[0] = '0';
	if (n < 0)
		new[0] = '-';
	while (n)
	{
		if (n > 0)
			new[--len] = digits[n % 10];
		else
			new[--len] = digits[n % 10 * -1];
		n /= 10;
	}
	return (new);
}
