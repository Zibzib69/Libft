/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 04:16:36 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/24 04:16:36 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nd;

	nd = n;
	if (nd < 0)
	{
		ft_putchar_fd('-', fd);
		nd = nd * -1;
	}
	if (nd > 9)
		ft_putnbr_fd(nd / 10, fd);
	ft_putchar_fd((nd % 10 + 48), fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd(20, 1);
// 	return (0);
// }
