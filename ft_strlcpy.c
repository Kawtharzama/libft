/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:38:13 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/05 17:38:25 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < dstsize)
		ft_memcpy(dest, src, src_len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dest, src, dstsize - 1);
		dest[dstsize - 1] = 0;
	}
	return (src_len);
}
