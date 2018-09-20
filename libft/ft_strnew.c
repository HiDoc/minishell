/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:35:53 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 16:35:54 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*t;

	i = 0;
	if (!(t = (char*)malloc((sizeof(char) * (size + 1)))))
		return (NULL);
	while (i < size)
	{
		*(t + i) = '\0';
		i++;
	}
	t[i] = 0;
	return (t);
}
