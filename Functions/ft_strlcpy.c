/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:57:26 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/05 15:23:07 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*************************************************************************
FUNCTION OK !!!!
*************************************************************************/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t    i;// Contador tamanho dst
	size_t    j;// Contador tamanho src
	size_t    k;
    
	i = 0;
	j = 0;
	k = 0;
	while(src[j] != '\0')
        	j++;
        if(size == 0)
        return (j);
	while (src[j] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}

/*

#include <stdio.h>
#include <string.h>

int main(void)//Retorno: 5
{
	char src[] = "Hello";
	char dest[10];
	printf("%ld\n", ft_strlcpy(dest, src, 0));
	printf("%s\n", dest);
}*/
