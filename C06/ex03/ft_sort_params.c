/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:16:09 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/28 21:35:03 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != 0 || s1[i] != 0))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*dummy_char;

	dummy_char = *a;
	*a = *b;
	*b = dummy_char;
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	int	counter1;
	int	counter2;

	counter1 = 1;
	counter2 = 1;
	while (counter1 < ac - 1)
	{
		counter2 = 1;
		while (counter2 < ac - 1)
		{
			if (ft_strcmp(av[counter2], av[counter2 + 1]) > 0)
			{
				ft_swap(&av[counter2], &av[counter2 + 1]);
			}
			counter2++;
		}
		counter1++;
	}
	counter1 = 1;
	while (counter1 < ac)
	{
		ft_putstr(av[counter1]);
		write(1, "\n", 1);
		counter1++;
	}
}
