/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:04:23 by fmadura           #+#    #+#             */
/*   Updated: 2018/09/20 18:14:44 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms_prototype.h"

extern char **environ;
void	set_environ(t_env *env, char *key, char *value);
void	unset_environ(t_env *env, char *key);
int main(void)
{
	t_env	env;

	init_env(&env);
	set_environ(&env, "a", "a");	
	//unset_environ(&env, "MAKELEVEL");	
	print_environ(&env);
	return (0);
}
