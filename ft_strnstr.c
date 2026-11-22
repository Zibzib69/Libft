/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 04:34:36 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/19 05:30:32 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little == 0)
		return ((char *)big);
	while (big[i] && i <= len)
	{
		j = 0;
		while (little[j] == big[i])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i - j]);
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	__builtin_printf("%s\n", (char *)ft_strnstr("abbbbbbABC", "", 10));
	__builtin_printf("%s\n", (char *)strnstr("abbbbbbABC", "", 10));
	return (0);
}
*/