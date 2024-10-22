/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 00:14:13 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/24 01:04:32 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	to_find_length;
	int	str_length;
	int	result;

	i = 0;
	to_find_length = ft_strlen(to_find);
	str_length = ft_strlen(str);
	if (to_find_length == 0 && str_length == 0)
		return (str);
	while (*str)
	{
		result = ft_strncmp(to_find, str, to_find_length);
		if (result == 0)
		{
			return (str);
		}
		str++;
	}
	return (0);
}
