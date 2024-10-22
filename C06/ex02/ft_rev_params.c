/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:00:39 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/27 15:01:50 by ibayandu         ###   ########.fr       */
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
	while (argument_count - 1)
	{
		ft_putstr(argument_value[argument_count - 1]);
		write(1, "\n", 1);
		argument_count--;
	}
}
