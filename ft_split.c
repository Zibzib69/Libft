/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 11:06:18 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/26 11:06:28 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_countword(const char *str, char charset)
{
	int	i;
	int	cw;

	i = 0;
	cw = 0;
	while (str[i] != '\0')
	{
		if (str[i] != charset && (i == 0 || str[i - 1] == charset))
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

static size_t	ft_wordlen(char const *s, size_t start, char c)
{
	size_t	wordlen;

	wordlen = 0;
	while (s[start + wordlen] != c && s[start + wordlen])
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

// #include "libft.h"
// #include<stdio.h>

// int main(void)
// {
// 	char **str = ft_split("Hello,World,Test", ',');
// 	int i = 0;
// 	while (str[i])
// 	{
// 		__builtin_printf("%s\n", str[i]);
// 		i++;
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	char	*str;
// 	char	**array;
// 	int		i;

// 	str = "";
// 	i = 0;
// 	ft_split("a,,b,,,c", ',');
// 	// __builtin_printf( "countword: %d\n", ft_countword(str, ' '));
// 	// array = ft_split("aaa,,,aaa", ',');
// 	// if(array==NULL)
// 	// 	__builtin_printf("array i null\");
// 	// while (array[i])
// 	// {
// 	// 	__builtin_printf("array[%d]: %s\n", i, array[i]);
// 	// 	i++;
// 	// }
// 	return (0);
// }
