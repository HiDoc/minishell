/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:24:50 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 16:24:51 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 12)
		return (0);
	if (nb > 1 && nb <= 12)
	{
		while (nb > 1)
		{
			i = i * nb;
			nb--;
		}
		return (i);
	}
	return (0);
}
