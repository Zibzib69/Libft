/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 04:33:56 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/19 04:41:45 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Bonjour";

	printf ("%s", (char*)memset(str, 'A', 6));
	printf ("%s", (char*)ft_memset(str, 'A', 6));
	return(0);
}
*/

/*
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = s;
	while(i < n)
	{
		str[i] = c;
		i++;
	}
	return(s);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char str[]= "Bonjour";
	printf("%s\n", (char *)memset(str, 'A', 3));
	printf("%s\n", (char *)ft_memset(str, 'A', 3));
	return (0);
	// 8|8|8|8
	// 255|255|255|255
	// 11111111|11111111|11111111|11111111
	// 00000001000000010000000100000001
	// 0|0|0|50
	// 50|50|50|50
}
*/
