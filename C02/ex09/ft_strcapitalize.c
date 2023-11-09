/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:06:49 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/08/23 18:39:12 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

void	instruction(char *str, int i)
{
	if (str[i] <= 47 || str[i] >= 123)
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= 32;
	}
	else if (str[i] >= 58 && str[i] <= 64)
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= 32;
	}
	else if (str[i] >= 91 && str[i] <= 96)
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i] != '\0')
	{
		instruction(str, i);
		i++;
	}
	return (str);
}
