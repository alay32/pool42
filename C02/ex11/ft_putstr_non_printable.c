/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:50:51 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/08/23 15:17:10 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hexadecimal(unsigned char dec)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[dec / 16]);
	ft_putchar(hex[dec % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
			i++;
		}
		else
		{
			ft_putchar('\\');
			hexadecimal(str[i]);
			i++;
		}
	}
}
