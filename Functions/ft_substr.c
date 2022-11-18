/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:24:05 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/18 21:13:16 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	unsigned int	j;
	char		*sub;

	sub = malloc((sizeof(char) * len) + 1);
	if (!(sub))
		return ('\0');
	i = 0;
	j = 0;
	while (s[start] != '\0' && j < len)
	{
		sub[j] = s[start];
		i++;
		j++;
		start++;
	}
	sub[j] = '\0';
	return (sub);
}
/*
int    main()
{
    char    *str;
    
    Everton Mota:
        s    = A string a partir da qual criar a substring.
    7:
        stsrt    = O índice inicial da substring na string.
    4:
        len    = O comprimento máximo da substring.
    
    str = ft_substr("PORTO", 2, 2);
    printf("%s", str);

    return (0);
}
*/
