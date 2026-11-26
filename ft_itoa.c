/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 04:16:13 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/24 04:16:13 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

size_t	int_len(int nb)
{
	int	i;

	if(nb == 0)
		return(1);
	i = 0;
	if (nb < 0)
		i = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nb;
	size_t		i;

	nb = n;
	i = int_len(nb);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (i != 0)
	{
		if (str[i - 1] == '-')
			break ;
		str[i - 1] = nb % 10 + 48;
		nb = nb / 10;
		i--;
	}
	return (str);
}

// int	main(void)
// {
// 	__builtin_printf("%s\n", ft_itoa(0));
// 	return (0);
// }
