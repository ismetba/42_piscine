/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:21:02 by ibayandu          #+#    #+#             */
/*   Updated: 2024/09/04 16:39:55 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_str;
	int			i;

	stock_str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock_str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);
		stock_str[i].copy = ft_strdup(av[i]);
		stock_str[i].str = ft_strdup(av[i]);
		stock_str[i].size = ft_strlen(av[i]);
		if (stock_str[i].str == NULL || stock_str[i].copy == NULL)
			return (NULL);
		i++;
	}
	stock_str[i].str = 0;
	return (stock_str);
}
