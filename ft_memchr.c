/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 04:33:27 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/19 04:41:39 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s || c == '\0')
		return (NULL);
	while (((char *)s)[i] != c && i < n)
	{
		if (((char *)s)[i] == '\0')
			return (NULL);
		if (((char *)s)[i] == c)
			return ((void *)&s[i]);
		i++;
	}
	return ((void *)&s[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf ("%s\n", (char*)ft_memchr("Bonjour les amis", 'j', 10));
	return(0);
}
*/
