/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 04:34:05 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/20 11:03:47 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		len;

	len = 0;
	if (!dest || !src || size < 0)
		return (len + ft_strlen(src));
	len = ft_strlen(dest);
	i = 0;
	size -= len;
	while (src[i] && size > 1)
	{
		size--;
		dest[len + i] = src[i];
		i++;
	}
	if (size > 0)
		dest[len + i] = '\0';
	return (len + ft_strlen(src));
}

/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[1000] = "Bonjour";

	strlcat(dest, "les amis", -1);
	printf("%s\n", dest);
	// printf("%lu\n", ft_strlcat(dest, "les amis", 10));
		// printf("%s\n", dest);
	return(0);
}
*/
