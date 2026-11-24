/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 00:16:48 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/24 04:18:30 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static int	ft_countword(const char *str, char charset)
{
	int	i;
	int	cw;

	i = 1;
	cw = 0;
	while (str[i] != '\0')
	{
		if (str[i] == charset && str[i - 1] != charset)
			cw++;
		if (str[i] != charset && str[i + 1] == '\0')
			cw++;
		i++;
	}
	return (cw);
}

static void	ft_free_array(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	ft_wordlen(char const *s, size_t start, char c)
{
	size_t	wordlen;

	wordlen = 0;
	while (s[start + wordlen] != c)
		wordlen++;
	return (wordlen);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	cw;
	size_t	i;
	size_t	start;

	i = 0;
	cw = ft_countword(s, c);
	array = malloc(sizeof(char *) * (cw + 1));
	if (!array)
		return (NULL);
	array[cw] = NULL;
	start = 0;
	while (i++ < cw)
	{
		while (s[start] == c)
			start++;
		array[i - 1] = ft_substr(s, start, ft_wordlen(s, start, c));
		start += ft_wordlen(s, start, c);
		if (array[i - 1] == NULL)
		{
			ft_free_array(array);
			return (NULL);
		}
	}
	return (array);
}

int	main(void)
{
	char	*str;
	char	**array;
	int		i;

	str = "alors     lkjdf         sale  sdsds    a";
	i = 0;
	// __builtin_printf( "countword: %d\n", ft_countword(str, ' '));
	array = ft_split(str, ' ');
	while (array[i])
	{
		__builtin_printf("array[%d]: %s\n", i, array[i]);
		i++;
	}
	return (0);
}