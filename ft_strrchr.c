/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 04:21:22 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/19 04:41:56 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0 && s[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf ("%s\n", strrchr("bonjour les amis", 'a'));
	printf ("%s\n", ft_strrchr("bonjour les amis", 'a'));
		return(0);
}
*/
