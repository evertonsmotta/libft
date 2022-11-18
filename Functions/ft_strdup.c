/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:56:54 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/18 20:54:06 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	j;
	const char		*dst;

	dst = (char *)malloc(sizeof(s));
	if (!(dst))
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	j = 0;
	if (s[j])
		ft_memmove (dst, s, (i + 1));
	else
		return ('\0');
	return (dst);
}
/*
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
*/