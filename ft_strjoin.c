/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:34:09 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/07 10:34:10 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_length;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	total_length = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(total_length + 1);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	ft_strlcpy(result, s1, total_length + 1);
	ft_strlcat(result, s2, total_length + 1);
	return (result);
}
