/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:36:42 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 16:36:43 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	if (needle[0] == 0)
		return ((char*)(haystack));
	while (haystack[i] != 0)
	{
		j = 0;
		pos = i;
		while (needle[j] == haystack[pos] && needle[j] != 0)
		{
			if (needle[j + 1] == 0 && needle[j] == haystack[pos] && j >= 0)
			{
				return ((char*)(haystack + i));
			}
			j++;
			pos++;
		}
		i++;
	}
	return (NULL);
}
