/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 03:24:29 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/19 04:41:35 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%d\n", ft_isascii('^'));
// 	printf("%d\n", isascii('^'));
// 	return (0);
// }
