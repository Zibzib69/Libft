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

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && i + j < len && little[j] == big[i + j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	__builtin_printf("%s\n", (char *)ft_strnstr("abcde", "xyz", 5));
// 	__builtin_printf("%s\n", (char *)strnstr("bacccababcaabbbbba", "bbc", 11));
// 	//__builtin_printf("void test %s\n", (char *)ft_strnstr("", "", 1000));
// 	//__builtin_printf("null %s\n", (char *)ft_strnstr(str, "", 1000));
// 	//__builtin_printf("%s\n", (char *)ft_strnstr("safdsaf", str, 1000));
// 	//__builtin_printf("%s\n", (char *)ft_strnstr(str, "abcd", 1));
// 	return (0);
// }
