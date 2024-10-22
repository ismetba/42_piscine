/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:12:27 by ibayandu          #+#    #+#             */
/*   Updated: 2024/09/05 13:02:37 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int	ft_is_charset(char c, char *charset)
{
	while (*charset)
		if (*charset++ == c)
			return (1);
	return (0);
}

int	ft_split_count(char *str, char *charset)
{
	int	result;
	int	i;
	int	is_in_charset;

	result = 0;
	is_in_charset = 0;
	while (*str)
	{
		i = 0;
		if (!is_in_charset)
			is_in_charset = ft_is_charset(*str, charset);
		str++;
	}
	return (result);
}

// char	**ft_split(char *str, char *charset)
// {
// 	char	**result;
// }

int	main(void)
{
	printf("%d", ft_split_count("deneme falan filan, ", " ,"));
}