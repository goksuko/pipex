/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   path.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/18 23:18:03 by akaya-oz      #+#    #+#                 */
/*   Updated: 2024/05/24 10:23:16 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/pipex.h"

int	check_path(char **envp)
{
	int	i;

	i = 0;
	while (envp[i] != NULL)
	{
		if (ft_strncmp(envp[i], "PATH=", 5) == 0)
			return (i);
		i++;
	}
	return (0);
}

char	*find_path(char *main_command, char **envp)
{
	char	*path;
	char	**path_split;
	int		i;
	char	*tmp;

	i = 0;
	if (access(main_command, F_OK | X_OK) == 0)
		return (main_command);
	while (ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;
	path_split = ft_split(envp[i] + 5, ':');
	if (errno == ENOMEM || path_split == NULL)
		ft_exit_perror(1, "path_split in find_path");
	i = 0;
	while (path_split[i])
	{
		tmp = ft_strjoin(path_split[i], "/");
		if (errno == ENOMEM || tmp == NULL)
			ft_exit_perror(1, "tmp in find_path");
		path = ft_strjoin(tmp, main_command);
		if (errno == ENOMEM || path == NULL)
			ft_exit_perror(1, "path in find_path");
		free(tmp);
		if (access(path, F_OK | X_OK) == 0)
			return (free_matrix(path_split), path);
		free(path);
		i++;
	}
	free_matrix(path_split);
	return (NULL);
}
// strjoin controls recently added so that it has more than 25 lines