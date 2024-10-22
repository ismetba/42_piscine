/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 23:48:17 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/23 23:57:13 by ibayandu         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				length;
	unsigned int	i;

	length = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = 0;
	return (dest);
}
