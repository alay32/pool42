/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:26:17 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/08/27 14:07:48 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fct;

	i = 1;
	fct = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (i <= nb)
		{
			fct *= i;
			i++;
		}
	}
	return (fct);
}