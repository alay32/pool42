/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:08:47 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/09/06 18:37:10 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_w_space(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

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
	return (i);
}

int	check_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	base_len;
	int	i;

	base_len = valid(base);
	if (!base_len)
		return (0);
	res = 0;
	sign = 1;
	i = 0;
	while (is_w_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (check_index(str[i], base) != -1)
	{
		res = res * base_len + check_index(str[i], base);
		i++;
	}
	return (sign * res);
}
