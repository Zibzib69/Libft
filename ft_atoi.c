/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 04:35:00 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/20 07:12:45 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *n)
{
	int			i;
	long int	result;
	int			sign;

	i = 0;
	sign = 1;
	result = 0;
	while (n[i] == ' ' || n[i] == '\t' || n[i] == '\f' || n[i] == '\n'
		|| n[i] == '\r' || n[i] == '\v')
		i++;
	if (n[i] == '-' || n[i] == '+')
	{
		if (n[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(n[i]) == 1)
	{
		result += n[i] - 48;
		if (ft_isdigit(n[i + 1]) == 1)
			result *= 10;
		i++;
	}
	return (result * sign);
}

// #include <stdlib.h>

// int	main(void)
// {
// 	__builtin_printf("%d\n", atoi("-2147483648"));
// 	__builtin_printf("%d\n", ft_atoi("-2147483648"));
// 	return (0);
// }
