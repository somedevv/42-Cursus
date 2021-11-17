/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 00:32:33 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/17 12:43:56 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	execcmd(char *argv, char **env)
{
	char	**cmd;

	cmd = ft_split(argv, ' ');
	if (execve(find_path(cmd[0], env), cmd, env) == -1)
		exiterror("Exec Error");
	ft_freestr(cmd);
}

static void	child(char **argv, char **env, int *fd)
{
	int		fdin;

	fdin = open(argv[1], O_RDONLY, 777);
	if (fdin == -1)
		exiterror("FD Error");
	dup2(fd[1], STDOUT_FILENO);
	dup2(fdin, STDIN_FILENO);
	close(fd[0]);
	execcmd(argv[2], env);
}

static void	daddy(char **argv, char **env, int *fd)
{
	int		fdout;

	fdout = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 777);
	if (fdout == -1)
		exiterror("FD Error");
	dup2(fd[0], STDIN_FILENO);
	dup2(fdout, STDOUT_FILENO);
	close(fd[1]);
	execcmd(argv[3], env);
}

int	main(int argc, char **argv, char **env)
{
	int	pid;
	int	fd[2];

	if (argc == 5)
	{
		if (pipe(fd) == -1)
			exiterror("Pipe Error");
		pid = fork();
		if (pid == -1)
			exiterror("PID Error");
		if (pid == 0)
			child(argv, env, fd);
		waitpid(pid, NULL, 0);
		daddy(argv, env, fd);
		close(fd[0]);
		close(fd[1]);
	}
	else
	{
		write(1, "Arg Error: Not enought args\n", 29);
		exit(EXIT_FAILURE);
	}
	exit (EXIT_SUCCESS);
}
