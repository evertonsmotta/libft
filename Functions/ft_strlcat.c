/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:57:17 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/18 20:58:51 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*************************************************************************
FUNCTION NOT OK !!!!
*************************************************************************/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (size == 0)
		return (j);
	while (size <= i && size > 0)
		return (j + size);
	while (src[k] != '\0' && k < size - i - 1)
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + j] = '\0';
	return (i + j);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char src[] = "plays";
    char dest[50] = "rrrrrrrrrrrrrrr";
    
    printf("%ld\n", ft_strlcat(dest, src, 16));
    printf("%s\n", dest);
    printf("\n");
    
    char src1[] = "plays";
    char dest1[16] = "juninho ";
    
    printf("%ld\n", ft_strlcat(dest1, src1, 0));
    printf("%s\n", dest1);
    printf("\n");
    
    char src2[] = "plays";
    char dest2[16] = "juninho ";
    
    printf("%ld\n", ft_strlcat(dest2, src2, 13));
    printf("%s\n", dest2);
    printf("\n");
    
    char src3[] = "plays";
    char dest3[16] = "juninho ";
    
    printf("%ld\n", ft_strlcat(dest3, src3, 1));
    printf("%s\n", dest3);
    printf("\n");
    
    return (0);
}
*/