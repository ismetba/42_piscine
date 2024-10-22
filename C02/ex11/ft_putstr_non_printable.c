/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 03:08:05 by ibayandu          #+#    #+#             */
/*   Updated: 2024/10/20 19:51:40 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_dec_to_hex_with_slash(unsigned char decimal)
{
	char			*hex;
	unsigned char	first_char;
	unsigned char	second_char;

	hex = "0123456789abcdef";
	first_char = decimal / 16;
	second_char = decimal % 16;
	write(1, "\\", 1);
	write(1, &hex[first_char], 1);
	write(1, &hex[second_char], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			print_dec_to_hex_with_slash((unsigned char)str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	ft_putstr_non_printable("çödöasfüasüğdcassşdişxcişzxvpğkeofjeqüfjlkv");
}