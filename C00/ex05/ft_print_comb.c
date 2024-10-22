/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 22:00:25 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/15 11:42:15 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_comb(char j, char k, char l)
{
	write(1, &j, 1);
	write(1, &k, 1);
	write(1, &l, 1);
	if (j != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	j;
	char	k;
	char	l;

	j = '0';
	while (j < '8')
	{
		k = j + 1;
		while (k < '9')
		{
			l = k + 1;
			while (l < ':')
			{
				ft_write_comb(j, k, l);
				l++;
			}
			k++;
		}
		j++;
	}
}
