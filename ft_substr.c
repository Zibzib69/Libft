/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 02:17:02 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/22 02:17:02 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if(len == 0)
		return(NULL);
	i = 0;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (s[start] && i < len)
	{	
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	__builtin_printf("%s\n", ft_substr("Bonjour les amis", 1, 0));
	return (0);
}
