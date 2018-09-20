/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:04:35 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 18:06:23 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ms_prototype.h>

void	collect_cmd(t_env *env, t_cmd *cmd)
{
	get_next_line(1, cmd->line) == -1 ? print_err(env, cmd) : 0;
	parse(env, cmd);
}

int		verif_cmd(t_cmd *cmd)
{
	int i;

	i = -1;
	cmd->tab[0] ? return (-1) : 0;
	while (++i < 6)
		if (ft_strcmp(cmd->tab[0], cmd->cmd[i]) == 0)
		{
			cmd->token = i;
			return (1);
		}
	return (-1);
}

void	parse(t_env *env, t_cmd *cmd)
{
	cmd->tab = ft_strsplit(*line, ' ');
	verif_cmd(cmd->tab) == -1 ? print_err(env, cmd) : 0;
	if (cmd->token == 0)
		cmd_echo(env, cmd);
	else if (cmd->token == 1)
		cmd_cd(env, cmd);
	else if (cmd->token == 2)
		cmd_setenv(env, cmd);
	else if (cmd->token == 3)
		cmd_unsetenv(env, cmd);
	else if (cmd->token == 4)
		cmd_env(env, cmd);
	else if (cmd->token == 5)
		cmd_exit(env, cmd);
	else
		print_err(env, cmd);
}
