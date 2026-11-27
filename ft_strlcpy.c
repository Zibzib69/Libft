/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 04:34:11 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/19 04:41:50 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		len;

	len = ft_strlen(src);
	i = 0;
	while (src[i] && size > 1)
	{
		size--;
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (len);
}

/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[] = "test1";
	char	dest2[] = "test2";
	char	src[] = "Bonjour";

	printf("%zu\n", ft_strlcpy(dest, src, 10));
	printf("%s\n", dest);
	printf("%zu\n", strlcpy(dest2, src, 10));
	printf("%s\n", dest2);
	return(0);
}
*/
