/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:58:01 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/18 21:06:59 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (len == '\0')
		return (big);
	i = 0;
	j = 0;
	while (i < len)
	{
		while (little[i] == big[j + i])
		{
			if (i + 1 == len)
			{
				return (big + i);
			}
			i++;
		}
		i = 0;
		j++;
	}
	return ('\0');
}
/*
//O seguinte define o ponteiro ptr como NULL, pois apenas os primeiros 4 
//caracteres de largestring são pesquisados:
int	main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
 
	ptr = ft_strnstr(largestring, smallstring, 4);

	return (0);
}
*/