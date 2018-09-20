/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:33:47 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 16:33:49 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len;
	size_t j;

	len = 0;
	j = 0;
	len = ft_strlen(dst);
	if (len >= size)
		return (ft_strlen(src) + size);
	while (src[j] && j < (size - len - 1))
	{
		dst[len + j] = src[j];
		j += 1;
	}
	dst[len + j] = '\0';
	return (ft_strlen(src) + len);
}
