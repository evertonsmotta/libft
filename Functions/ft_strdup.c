/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:56:54 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/12 13:01:46 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***************************************************************************
Retorna um ponteiro para uma string de bytes terminada em nulo, que é uma duplicata da string apontada por s. O ponteiro retornado deve ser passado para free para evitar um vazamento de memória. 

Se ocorrer um erro, um ponteiro nulo é retornado e errno pode ser definido.

Parameter:
	s	-  ponteiro para a cadeia de bytes terminada em nulo para duplicar;
	
Return:	Um ponteiro para a string recém-alocada ou um ponteiro nulo se ocorrer um erro.


***************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}

char *ft_strdup(const char *s)
{
    size_t    i;
    size_t    j;
    
    const char    *dst;
    
    dst = (char *)malloc(sizeof(s));
    
    i = 0;
    while(s[i])
        i++;
    j = 0;
    if(s[j])
        ft_memmove (dst, s, (i + 1));
    else
        return('\0');
    return(dst);
}

int main()
{
    char source[] = "Geeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    //Uma cópia da fonte é criada dinamicamente
    // e o ponteiro para copiar é retornado.
    char* target = ft_strdup(source);
 
    printf("%s", target);
    return 0;
}




















