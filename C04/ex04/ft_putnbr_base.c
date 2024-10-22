/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 05:03:26 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/24 07:43:08 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_check_error(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*str == 0)
		return (1);
	while (str[i])
	{
		j = i + 1;
		if (str[i] <= 32 || str[i] == 127 || str[i] == '-' || str[i] == '+')
			return (1);
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i == 1)
		return (1);
	return (0);
}

void	ft_print_nbr(long nbr, char *base, int length_of_base)
{
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_print_nbr(-1 * (nbr / length_of_base), base, length_of_base);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > length_of_base - 1 && nbr != -2147483648)
		ft_print_nbr(nbr / length_of_base, base, length_of_base);
	write(1, &base[nbr % length_of_base], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		length_of_base;
	long	number;

	number = nbr;
	if (ft_check_error(base))
		return ;
	length_of_base = ft_strlen(base);
	ft_print_nbr(number, base, length_of_base);
}
