/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:51:18 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/29 03:10:16 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

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

char	*ft_memcpy(char *destaddr, char *srcaddr, int len)
{
	char	*dest;

	dest = destaddr;
	while (len-- > 0)
	{
		*destaddr++ = *srcaddr++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		l;
	char	*t;

	if (src == NULL)
		return (NULL);
	l = ft_strlen(src);
	t = malloc(l + 1);
	ft_memcpy(t, src, l);
	t[l] = 0;
	return (t);
}
