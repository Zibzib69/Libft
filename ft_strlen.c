/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 04:34:15 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/19 04:41:51 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

//
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	printf("%lu\n", ft_strlen("Bonjour"));
// 	printf("%lu\n", strlen("Bonjour"));
// 	return (0);
// }
