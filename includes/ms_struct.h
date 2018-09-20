/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 14:51:07 by fmadura           #+#    #+#             */
/*   Updated: 2018/09/20 18:00:09 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS_STRUCT_H
# define MS_STRUCT_H
typedef struct s_env	t_env;
typedef struct s_cmd	t_cmd;

struct s_env
{
	char	**environ;
};

struct s_cmd
{
	char	**line;
	char	**tab;
	char	cmd[7][9];
	int		token;
};

#endif
