/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 04:28:26 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/26 04:28:26 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if(*lst == NULL)
	{
		*lst = new;
		return;
	}
	ft_lstlast(*lst)->next = new;
}
