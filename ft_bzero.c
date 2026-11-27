/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 04:22:12 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/19 04:41:29 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Bonjour";

	printf("%s\n", str);
	ft_bzero(str, 5);
	printf("%s\n", str);
	printf("%c\n", str[4]);
	return(0);
}
*/
