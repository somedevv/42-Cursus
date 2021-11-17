/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 03:14:00 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/17 02:54:04 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	exiterror(char *error)
{
	perror(error);
	exit(EXIT_FAILURE);
}

char	*find_path(char *cmd, char **env)
{
	int		i;
	char	*dash_path;
	char	*path;
	char	**envvars;

	i = 0;
	while (ft_strnstr(env[i], "PATH", 4) == 0)
		i++;
	envvars = ft_split(env[i] + 5, ':');
	i = 0;
	while (envvars[i])
	{
		dash_path = ft_strjoin(envvars[i], "/");
		path = ft_strjoin(dash_path, cmd);
		free(dash_path);
		if (access(path, F_OK) == 0)
			return (path);
		i++;
	}
	return (0);
}
