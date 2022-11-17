/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:24:05 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/02 16:24:10 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**************************************************************************
Function name:	ft_substr
Header FIle:
Description:	Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
Aloca (com malloc(3)) e retorna uma substring
da string 's'.
A substring começa no índice 'start' e é de
tamanho máximo 'len'.

Return value:	The substring.
		NULL if the allocation fails.
Ele retorna a substring da string de origem começando na posição start e terminando na posição len -1.
Ext. function:	malloc
Turn in files: 
Prototype:	char *ft_substr(char const *s, unsigned int start, size_t len)
Parameters:	s: The string from which to create the substring.
		start: The start index of the substring in the
string ’s’.  O s vem do inglés source que em pt singnifica fonte.
		len: The maximum length of the substring. O comprimento máximo da substring
Observation:	Mesmo que só exista 3 variáveis, deve-se criar uma variável de destino para retornar  substring.
https://www.youtube.com/watch?v=b54qWLdljvE

/*
char *ft_substr(char const *s, unsigned int start,
 tamanho_t len);

 Parâmetros:
 s: A string a partir da qual criar a substring.
 start: O índice inicial da substring na string.
 len: O comprimento máximo da substring.

 Retornar:
 A subcadeia.
 NULL se a alocação falhar.

 Funções externas:
 malloc

 Descrição:
 Aloca (com malloc(3)) e retorna uma substring
 da string 's'.
 A substring começa no índice 'start' e é de
 tamanho máximo 'len'.
*/
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t    i;
	unsigned int    j;
	char    *sub;
	
	sub = malloc((sizeof(char) * len) + 1);
	
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
    /*
    Everton Mota:
        s    = A string a partir da qual criar a substring.
    7:
        stsrt    = O índice inicial da substring na string.
    4:
        len    = O comprimento máximo da substring.
    */
    str = ft_substr("PORTO", 2, 2);
    printf("%s", str);

    return (0);
}*/
