/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 04:33:06 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/19 04:41:33 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
//#include <ctype.h>
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%d\n", ft_isalpha(3));
// 	printf("%d\n", isalpha(3));
// 	return (0);
// }
