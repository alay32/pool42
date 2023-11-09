/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:28:19 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/09/05 20:39:29 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid(char *base)
{
	int	i;

	i = 0;
	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	num;

	num = nbr;
	size = 0;
	if (!valid(base))
		return ;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	while (base[size])
		size++;
	if (num >= size)
		ft_putnbr_base(num / size, base);
	write(1, &base[num % size], 1);
}
