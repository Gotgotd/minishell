/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:03:11 by gdaignea          #+#    #+#             */
/*   Updated: 2024/06/10 17:03:38 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	ft_env(t_data *data)
{
	int	i;

	i = 0;
	while (data->env_cpy[i])
	{
		printf("%s\n", data->env_cpy[i]);
		i++;
	}
}
