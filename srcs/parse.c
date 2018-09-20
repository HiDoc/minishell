/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:04:35 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 16:39:51 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ms_prototype.h>

void	collect_cmd(t_env *env, t_cmd *cmd)
{
	get_next_line(1, cmd->line) == -1 ? print_err(env, cmd) : 0;
	parse(env, cmd);
}

void	parse(t_env *env, t_cmd *cmd)
{

