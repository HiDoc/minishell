/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environ.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 14:54:19 by fmadura           #+#    #+#             */
/*   Updated: 2018/09/20 17:11:06 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms_prototype.h"

void		free_tab(char **tab)
{
	int		i;
	
	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			free(tab[i]);
			i++;
		}
	}
	free(tab);
}

static char	*join_key_val(char *key, char *value)
{
	char	*tmp;
	char	*ret;

	ret = NULL;
	if (key && value)
	{
		tmp = ft_strjoin(key, "=");
		ret = ft_strjoin(tmp, value);
		free(tmp);		
	}
	return (ret);
}

void	add_environ(t_env *env, char *key, char *value)
{
	char	**tmp;
	char	*add;
	
	add = join_key_val(key, value);
	tmp = copy_tab(env->environ, add);
	free(add);
	free_tab(env->environ);
	env->environ = tmp;
}

int		get_pos(char **tab, char *key)
{
	int		i;
	int		lkey;

	i = 0;
	if (tab && key)
	{
		lkey = ft_strlen(key);
		while (tab[i])
		{
			if (ft_strncmp(key, tab[i], lkey) && tab[i][lkey] == '=')
				return (i);
			i++;
		}
	}
	return (-1);
}

void	unset_environ(){}

void	set_environ(t_env *env, char *key, char *value)
{
	int		i;
	int		set;
	int		pos;

	i = 0;
	set = 0;
	if (key && value && env->environ)
	{
		if ((pos = get_pos(env->environ, key)) > - 1)
		{
			free(env->environ[pos]);
			env->environ[i] = join_key_val(key, value);
		}
		add_environ(env, key, value);
	}
}

void	print_environ(t_env *env)
{
	int i;

	i = 0;
	if (env->environ)
	{
		while (env->environ[i])
			printf("%s\n", env->environ[i++]);
	}
}
