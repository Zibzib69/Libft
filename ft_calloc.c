/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 07:14:43 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/20 07:14:43 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*str;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb >= SIZE_MAX / size)
		return (NULL);
	str = malloc(sizeof(size_t) * (size * nmemb));
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		ft_bzero(str, (size * nmemb));
	}
	return (str);
}
/* 
int	main(void)
{
	__builtin_printf("%s\n", (char *)calloc(10, 10));
	__builtin_printf("%s\n", (char *)ft_calloc(10, 10));
	return (0);
}
*/