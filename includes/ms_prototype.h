/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_prototype.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 14:52:38 by fmadura           #+#    #+#             */
/*   Updated: 2018/09/20 17:12:41 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS_PROTOTYPE_H
# define MS_PROTOTYPE_H
# include "ms_define.h"
# include "ms_struct.h"

int		get_tablen(char **tab);
char	**copy_tab(char **tab, char *add);
void	print_environ(t_env *env);
t_env	*init_env(t_env *env);
#endif
