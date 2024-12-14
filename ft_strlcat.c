/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:27:39 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/10 13:17:25 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	space_remaining;
	size_t	i;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	space_remaining = size - dest_len - 1;
	i = 0;
	while (i < space_remaining && src[i])
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = 0;
	return (dest_len + src_len);
}
