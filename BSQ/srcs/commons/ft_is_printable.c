/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_printable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeybek <yzeybek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:25:15 by yzeybek           #+#    #+#             */
/*   Updated: 2024/09/04 09:27:23 by yzeybek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_printable(char a, char b, char c)
{
	if (a < 127 && a > 31
		&& b < 127 && b > 31
		&& c < 127 && c > 31)
		return (1);
	else
		return (0);
}
