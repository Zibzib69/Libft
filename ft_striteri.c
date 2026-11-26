/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqadwimi <sqadwimi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 04:17:01 by sqadwimi          #+#    #+#             */
/*   Updated: 2026/11/24 04:17:01 by sqadwimi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	test(unsigned int i, char *s)
// {
// 	s[i] = s[i] + 1;
// }
// 
// int	main(void)
// {
// 	char str[] = "abc";
// 	ft_striteri(str, test);
// 	__builtin_printf("%s", str);
// 	return (0);
// }
