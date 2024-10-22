/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:56:57 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/26 21:15:35 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	index = 2;
	if (nb > 2)
	{
		while (index * index <= (long)nb)
		{
			if (index * index == (long)nb)
				return (index);
			index++;
		}
	}
	return (0);
}
