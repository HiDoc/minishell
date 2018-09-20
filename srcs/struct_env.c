/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:48:57 by fmadura           #+#    #+#             */
/*   Updated: 2018/09/20 18:13:30 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms_prototype.h"

extern char **environ;

int		get_tablen(char **tab)
{
	int		i;

	i = 0;
	if (tab)
	{
		while (tab[i])
			i++;
	}
	return (i);
}

char	**copy_tab(char **src, char *add)
{
	char	**dest;
	int		i;

	i = 0;
	dest = NULL;
	if (src)
	{
		i = get_tablen(src);
		if (add)
			i++;
		if ((dest = malloc(sizeof(char *) * (i + 1))) == NULL)
			return (NULL);
		i = 0;
		while (src[i])
		{
			dest[i] = ft_strdup(src[i]);
			i++;
		}
		if (add)
			dest[i++] = ft_strdup(add);
		dest[i] = NULL;
	}
	return (dest);
}

t_env	*init_env(t_env *env)
{
	env->environ = copy_tab(environ, NULL);
	return (env);
}
