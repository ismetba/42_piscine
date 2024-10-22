/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 23:44:22 by ibayandu          #+#    #+#             */
/*   Updated: 2024/08/15 08:00:34 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	char_to_str(char number)
{
	char	tens_digit;
	char	units_digit;

	tens_digit = (number / 10) + 48;
	units_digit = (number % 10) + 48;
	write(1, &tens_digit, 1);
	write(1, &units_digit, 1);
}

void	print_two_number(char first_number, char second_number)
{
	char_to_str(first_number);
	write(1, " ", 1);
	char_to_str(second_number);
	if (first_number != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	first_number;
	char	second_number;

	first_number = 0;
	second_number = 0;
	while (first_number < 100)
	{
		second_number = first_number + 1;
		while (second_number < 100)
		{
			print_two_number(first_number, second_number);
			second_number++;
		}
		first_number++;
	}
}
