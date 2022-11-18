/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:25:26 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/18 20:58:43 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	int	k;
	int	len;
	int	cont;
	char		*dst;
	char		*dest;
	char		*src;

	i = 0;
	j = 0;
	dest = s1;
	src = s2;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	len = i + j;
	dst = malloc((sizeof(char) * len) + 1);
	if (!(dst))
		return (NULL);
	k = 0;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	cont = 0;
	while (dest[cont] != '\0')
	{
		dst[cont] = dest[cont];
		cont++;
	}
	dst[cont] = '\0';
	return (dst);
}
/*
int    main(void)
{
    char a[10] = "EVER";
    char b[10] = "TON";
    ft_strjoin(a, b);
//    ft_strcat(a, b);
    printf("%s\n", a);
    return (0);
}
*/