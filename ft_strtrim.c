/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 04:10:57 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/24 04:15:52 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_isinset(s1[i], set))
		i++;
	while (j >= i && ft_isinset(s1[j], set))
		j--;
	str = ft_substr(s1, i, j - i + 1);
	return (str);
}

// int	main(void)
// {
// 	__builtin_printf("%s\n",
//		ft_strtrim("aaaaaaaaabbbbbaaBonjour les amisaaaaaaabbbbaaa", "ab"));
// 	return (0);
// }
