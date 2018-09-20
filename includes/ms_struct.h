/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 14:51:07 by fmadura           #+#    #+#             */
/*   Updated: 2018/09/20 16:07:50 by jyildiz-         ###   ########.fr       */
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
};

#endif
