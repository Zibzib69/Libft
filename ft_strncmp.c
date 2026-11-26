/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 04:34:29 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/19 04:41:53 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0 || (!s1 || !s2))
		return (0);
	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
        return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}


// #include <string.h>

// int	main(void)
// {
// 	printf("%d\n", strncmp("abcx", "abcy", 3));
// 	printf("%d\n", ft_strncmp("abcx", "abcy", 3));
// 	return(0);
// }

