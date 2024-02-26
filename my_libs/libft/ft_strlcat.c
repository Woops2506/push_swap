/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareurin <mareurin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:53:02 by mareurin          #+#    #+#             */
/*   Updated: 2023/11/28 16:37:19 by mareurin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	z;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	z = dst_len;
	if (dst_len < size - 1 && size > 0)
	{
		while (src[i] && dst_len + i < size - 1)
		{
			dst[z] = src[i];
			z++;
			i++;
		}
		dst[z] = 0;
	}
	if (dst_len >= size)
		dst_len = size;
	return (dst_len + src_len);
}
