/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:36:06 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 16:36:08 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == 0)
		return ((char*)(haystack));
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] && haystack[i + j] && (i + j) < len)
			j++;
		if (needle[j] == 0)
			return ((char*)(haystack + i));
		i++;
	}
	return (NULL);
}
