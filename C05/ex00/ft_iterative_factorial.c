/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:49:25 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/25 22:04:13 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sum;

	if (nb < 0)
		return (0);
	sum = 1;
	while (nb)
	{
		sum = sum * nb;
		nb--;
	}
	return (sum);
}
