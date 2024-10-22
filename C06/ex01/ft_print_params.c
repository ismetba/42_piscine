/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:34:47 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/27 14:45:17 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argument_count, char **argument_value)
{
	int	i;

	i = 1;
	while (i < argument_count)
	{
		ft_putstr(argument_value[i]);
		write(1, "\n", 1);
		i++;
	}
}
