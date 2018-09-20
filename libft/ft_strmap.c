/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:34:30 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 16:34:32 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	long i;
	char *t;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	if (!(t = malloc(i + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		t[i] = f(s[i]);
		i++;
	}
	t[i] = 0;
	return (t);
}
