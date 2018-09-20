/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:33:36 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 16:33:38 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_joint(char const *s1, char const *s2, char *t)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[j])
	{
		t[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i])
	{
		t[j] = s2[i];
		i++;
		j++;
	}
	t[j] = 0;
	return (t);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*t;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		i++;
		j++;
	}
	if (!(t = malloc(i + 1)))
		return (NULL);
	return (ft_joint(s1, s2, t));
}
