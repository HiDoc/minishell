/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 17:06:32 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 17:40:55 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ms_prototype.h>


void	init_cmd(t_cmd *cmd)
{
	cmd->line = NULL;
	cmd->tab = NULL;
	cmd->token = -1;
	cmd[0] = ft_strcpy(cmd[0], "echo");
	cmd[1] = ft_strcpy(cmd[1], "cd");
	cmd[2] = ft_strcpy(cmd[2], "setenv");
	cmd[3] = ft_strcpy(cmd[3], "unsetenv");
	cmd[4] = ft_strcpy(cmd[4], "env");
	cmd[5] = ft_strcpy(cmd[5], "exit");
	cmd[6] = ft_strcpy(cmd[6], "\0");
}

