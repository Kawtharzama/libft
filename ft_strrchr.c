/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:27:39 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/05 19:27:41 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;
	char	*x;

	cc = (char) c;
	i = 0;
	x = NULL;
	while (s[i])
	{
		if (s[i] == cc)
			x = ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		x = ((char *) &s[i]);
	return (x);
}
