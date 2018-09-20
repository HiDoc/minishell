/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environ.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 14:54:19 by fmadura           #+#    #+#             */
/*   Updated: 2018/09/20 15:55:08 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms_prototype.h"


void	set_environ(char *key, char *value)
{
	if (key && value)
	{
		return;
	}
}

void	print_environ(t_env *env)
{
	int i;

	i = 0;
	if (env->environ)
		while (env->environ[i])
			printf("%s\n", env->environ[i++]);
}
