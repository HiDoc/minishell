/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:04:23 by fmadura           #+#    #+#             */
/*   Updated: 2018/09/20 15:56:35 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms_prototype.h"

extern char **environ;

int main(void)
{
	t_env	env;

	init_env(&env);
	print_environ(&env);
	return (0);
}