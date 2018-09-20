/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:26:55 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 16:26:57 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	u;

	u = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)(s + i) == u)
			return ((unsigned char*)(s + i));
		i++;
	}
	return (NULL);
}
