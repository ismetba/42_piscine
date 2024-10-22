/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:21:54 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/27 14:59:33 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argument_count, char **argument_value)
{
	int	i;

	i = 0;
	if (argument_count > 0)
	{
		while (argument_value[0][i])
		{
			write(1, &argument_value[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
