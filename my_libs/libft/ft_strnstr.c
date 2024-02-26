/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareurin <mareurin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:53:24 by mareurin          #+#    #+#             */
/*   Updated: 2023/11/28 16:39:10 by mareurin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	z;

	if (!big && !little)
		return (0);
	if (!little[0])
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		z = 0;
		while (big[i + z] && little[z]
			&& i + z < len && big[i + z] == little[z])
			z++;
		if (!little[z])
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
