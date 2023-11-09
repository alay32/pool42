/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:18:16 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/08/28 21:39:41 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_fabs(int nb)
{
	if (nb < 0)
	{
		return (-nb);
	}
	return (nb);
}

int	*ft_range(int min, int max)
{
	int	*t;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	t = (int *)malloc((ft_fabs(size) + 1) * sizeof(int));
	while (min < max)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
