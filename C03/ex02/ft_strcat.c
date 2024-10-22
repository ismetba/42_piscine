/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 06:42:41 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/23 23:57:22 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char *dest, char *src)
{
	int	length;
	int	i;

	length = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = src[i];
	return (dest);
}
