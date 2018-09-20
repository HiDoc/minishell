/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:48:57 by fmadura           #+#    #+#             */
/*   Updated: 2018/09/20 15:53:23 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms_prototype.h"

extern char **environ;

t_env	*init_env(t_env *env)
{
	int		i;

	i = 0;
	if (environ)
	{
		while (environ[i])
			i++;
		if ((env->environ = malloc(sizeof(char *) * (i + 1))) == NULL)
			return (NULL);
		i = 0;
		while (environ[i])
		{
			env->environ[i] = ft_strdup(environ[i]);
			i++;
		}
		env->environ[i] = NULL;
	}
	return (env);
}
