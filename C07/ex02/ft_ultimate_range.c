/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:08:08 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/29 09:37:06 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int	*ft_range(int min, int max)
{
	int	*intarr;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	intarr = malloc(sizeof(int) * (max - min));
	if (intarr == NULL)
		return (NULL);
	while (i < (max - min))
	{
		intarr[i] = min + i;
		i++;
	}
	return (intarr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (!*range)
	{
		return (-1);
	}
	return (max - min);
}
