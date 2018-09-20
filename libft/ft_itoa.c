/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:25:00 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 16:25:01 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_fill2(long nb, int j, char *s, char c)
{
	if (s == NULL)
		return (NULL);
	if (c == '-')
		s[0] = '-';
	s[j] = '\0';
	j--;
	if (nb == 0)
		s[0] = nb + '0';
	while (nb != 0)
	{
		if (nb % 10 == 0)
		{
			s[j] = (nb % 10) + '0';
			nb = nb / 10;
			j--;
		}
		else
		{
			s[j] = nb % 10 + '0';
			nb = nb / 10;
			j--;
		}
	}
	return (s);
}

char		*ft_itoa(int n)
{
	char	*s;
	long	nb;
	int		j;
	char	c;

	nb = n;
	j = 1;
	if (nb < 0)
	{
		nb = nb * -1;
		j++;
		c = '-';
	}
	while (n / 10 != 0)
	{
		n = n / 10;
		j++;
	}
	if (!(s = ft_fill2(nb, j, ft_strnew(j), c)))
		return (NULL);
	return (s);
}
