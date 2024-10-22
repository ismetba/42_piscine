/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 02:55:42 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/24 04:59:29 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	char	*space_chars;

	space_chars = "\t\n\v\f\r ";
	while (*space_chars)
	{
		if (*space_chars == c)
		{
			return (1);
		}
		space_chars++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	sum;
	int	is_minus;

	sum = 0;
	is_minus = 1;
	while (ft_is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_minus *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		sum = (sum * 10) + (*str - 48);
		str++;
	}
	return (sum * is_minus);
}
