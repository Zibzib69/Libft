/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 04:33:21 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/19 04:41:37 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%d\n", ft_isdigit('a'));
// 	printf("%d\n", isdigit('a'));
// 	return (0);
// }
