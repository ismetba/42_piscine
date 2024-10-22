/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:18:27 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/19 01:02:41 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	dummy_int;

	i = 0;
	while (i < (size / 2))
	{
		dummy_int = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = dummy_int;
		i++;
	}
}
