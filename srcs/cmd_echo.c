/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_echo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 18:06:33 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 18:36:04 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ms_prototype.h>

int		verif_quote(t_cmd *cmd)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (cmd->tab[i])
	{
		j = 0;
		while (cmd->tab[i][j])
		{
			cmd->tab[i][j] == '"' ? count++ : 0;
			j++;
		}
		i++;
	}
	count % 2 != 0 ? return (-1) : return (1);
}

void	cmd_echo(t_env *env, t_cmd *cmd)
{
	int j;
	int i;

	i = 0;
	verif_quote == -1 ? print_err(env, cmd) : 0;
	ft_putstr(cmd->line[1]);
	while (cmd->tab[i])
	{
		j = 0;
		while (cmd->tab[i][j])
		{
			cmd->tab[i][j] != '"' ? ft_putchar(cmd->tab[i][j]) : 0;
			j++;
		}
		ft_putchar(' ');
		i++;
	}
}
