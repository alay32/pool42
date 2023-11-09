/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:58:09 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/09/07 21:17:39 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	checksep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && checksep(str[i], charset))
			i++;
		if (str[i])
			j++;
		while (str[i] && !checksep(str[i], charset))
			i++;
	}
	return (j);
}

char	*ft_get_firstword(char *str, char *charset)
{
	int		i;
	char	*f_word;

	i = 0;
	while (str[i] && !checksep(str[i], charset))
		i++;
	f_word = (char *)malloc(sizeof(char) * i);
	if (!f_word)
		return (NULL);
	i = 0;
	while (str[i] && !checksep(str[i], charset))
	{
		f_word[i] = str[i];
		i++;
	}
	f_word[i] = '\0';
	return (f_word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**arr;

	i = 0;
	arr = (char **)malloc(sizeof(char *) * (count_strings(str, charset) + 1));
	if (!arr)
		return (NULL);
	while (*str)
	{
		while (*str && checksep(str[0], charset))
			str++;
		if (*str && !checksep(str[0], charset))
		{
			arr[i] = ft_get_firstword(str, charset);
			i++;
		}
		while (*str && !checksep(str[0], charset))
			str++;
	}
	arr[i] = 0;
	return (arr);
}
