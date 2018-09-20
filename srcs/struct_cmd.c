/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 17:06:32 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 17:18:27 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ms_prototype.h>


void	init_cmd(t_cmd *cmd)
{
	int i;

	i = -1;
	cmd->line = NULL;
	cmd->tab = NULL;
	cmd->token = -1;
	while (i < 8)
	{
		cmd[i] = ft_strcpy(cmd[i],  }
