/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:44:37 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/08/27 15:41:18 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	pow;

	i = 0;
	pow = 1;
	if (power < 0)
		return (0);
	if ((power == 0) || (power == 0 && nb == 0))
		return (1);
	else
	{
		while (i < power)
		{
			pow *= nb;
			i++;
		}
	}
	return (pow);
}
