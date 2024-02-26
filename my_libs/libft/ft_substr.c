/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareurin <mareurin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:53:39 by mareurin          #+#    #+#             */
/*   Updated: 2023/11/28 16:40:14 by mareurin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_len(char const *s, unsigned int start)
{
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	while (s[i])
	{
		if (i >= start)
			z++;
		i++;
	}
	return (z);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	z;
	char	*str;

	i = 0;
	z = check_len(s, start);
	if (z < len)
		len = z;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (0);
	z = 0;
	while (s[i])
	{
		if (i >= start && z < len)
		{
			str[z] = s[i];
			z++;
		}
		i++;
	}
	str[z] = 0;
	return (str);
}
