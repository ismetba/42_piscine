/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 05:25:23 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/29 07:03:50 by ibayandu         ###   ########.fr       */
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
