/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:45:05 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/08/28 22:08:40 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_fabs(int nb)
{
	if (nb < 0)
	{
		return (-1);
	}
	return (nb);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*t;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	t = (int *)malloc((ft_fabs(size) + 1) * sizeof(int));
	while (min < max)
	{
		t[i] = min;
		i++;
		min++;
	}
	*range = t;
	return (ft_fabs(size));
}
