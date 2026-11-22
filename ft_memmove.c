/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 04:33:43 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/19 04:41:43 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (d);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Bonjour";
	char	src[] = "les amis";

	printf ("%s\n", (char*)memmove(str, src, 4));
	printf ("%s\n", (char*)ft_memmove(str, src, 4));
	return(0);
}
*/
