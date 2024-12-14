/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:08:37 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/10 13:14:45 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <string.h> 

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (!dest && !src)
		return (NULL);
	tmp_dst = (unsigned char *) dest;
	tmp_src = (unsigned char *) src;
	if (tmp_dst > tmp_src)
		while (len -- > 0)
			tmp_dst[len] = tmp_src[len];
	else
	{
		ft_memcpy(tmp_dst, tmp_src, len);
	}
	return (dest);
}
/*

int main(void)
{
    char buffer[20] = "Hello, World!";
    
    // Move part of the string within the same buffer
    ft_memmove(buffer+3, buffer, 15); // Move "Hello, World!" to overlap itself

    printf("Result: '%s'\n", buffer); // Should print "Hello, Hello, World!"
    
    return 0;
}
*/
