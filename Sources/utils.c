/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/16 13:34:42 by akaya-oz      #+#    #+#                 */
/*   Updated: 2024/05/24 10:24:45 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/pipex.h"


void	*free_matrix(char **matrix)
{
	int	i;

	i = 0;
	if (matrix == NULL)
		return (NULL);
	while (matrix[i])
	{
		free(matrix[i]);
		matrix[i] = NULL;
		i++;
	}
	if (matrix)
	{
		free(matrix);
		matrix = NULL;
	}
	return (NULL);
}

void	start_exec(char *long_command, char **envp)
{
	char	**cmd;
	char	*path;

	path = NULL;
	if (long_command[0] == ' ')
		ft_exit_str_fd(127, "zsh: not a directory: \n", 2);
	cmd = ft_split(long_command, ' ');
	if (cmd[0])
		path = find_path(cmd[0], envp);
	else
	{
		free_matrix(cmd);
		ft_exit_str_fd(1, "zsh: permission denied: \n", 2);
	}
	if (!path)
	{
		ft_putstr3_fd("zsh: command not found: ", cmd[0], "\n", 2);
		free_matrix(cmd);
		exit(127);
	}
	if (execve(path, cmd, envp) == -1)
	{
		free_matrix(cmd);
		ft_exit_str_fd(1, "Error executing command\n", 2);
	}
}

char	*put_main_command(char *command, char space)
{
	char	*temp;
	int		i;

	i = 0;
	while (command[i] != space && command[i] != '\0')
		i++;
	temp = (char *)ft_calloc(sizeof(char), (i + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (command[i] != space && command[i] != '\0')
	{
		temp[i] = command[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
