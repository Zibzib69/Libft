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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	src_len;

	len = 0;
	src_len = ft_strlen(src);
	while (len < size && dest[len])
		len++;
	if (len == size)
		return (size + src_len);
	i = 0;
	while (src[i] && i < size - len - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (len + src_len);
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
