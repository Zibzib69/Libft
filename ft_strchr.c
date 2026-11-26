/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 04:34:00 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/20 11:29:37 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf ("%s\n", ft_strchr("Bonjour les amis", 'n'));
// 	printf ("%s\n", strchr("Bonjour les amis", 'n'));
// 	return(0);
// }
