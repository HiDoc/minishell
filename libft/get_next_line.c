/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 12:14:02 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 15:59:05 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_read(int fd, char *str)
{
	char	*buf;
	char	*tmp;
	int		ret;

	if ((buf = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)) == 0)
		return (NULL);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		tmp = str;
		if ((str = ft_strjoin(str, buf)) == NULL)
			return (NULL);
		ft_strdel(&tmp);
		if (ft_strchr(buf, '\n') != 0)
			break ;
	}
	free(buf);
	return (str);
}

int			get_next_line(const int fd, char **line)
{
	static char		*str[OPEN_MAX];
	int				i;
	int				len;

	i = 0;
	if (read(fd, NULL, 0) < 0 || BUFF_SIZE < 1 || fd > OPEN_MAX
			|| line == NULL)
		return (-1);
	if (str[fd] == NULL)
		str[fd] = ft_strnew(0);
	if ((str[fd] = ft_read(fd, str[fd])) == NULL)
		return (-1);
	if (str[fd][0] == '\0')
		return (0);
	len = ft_strlen(str[fd]);
	while (str[fd][i] != '\n' && str[fd][i])
		i++;
	*line = ft_strsub(str[fd], 0, i);
	if (i == len)
		i--;
	str[fd] = ft_strncpy(str[fd], &str[fd][i + 1], len);
	return (1);
}
