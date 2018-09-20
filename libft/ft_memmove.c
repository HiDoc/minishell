/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:28:09 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 16:28:11 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst < src)
		while (i < len)
		{
			*(char*)(dst + i) = *(char*)(src + i);
			i++;
		}
	else
		while (len--)
			*(char*)(dst + len) = *(char*)(src + len);
	return (dst);
}
