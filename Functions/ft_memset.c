/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:56:27 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/05 12:09:22 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Function name:	ft_memset.c
Header FIle:	#include <string.h>
Description:	The  memset()  function  fills  the  first  n  bytes of the memory area pointed to by s with the constant byte c.
Copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument s.
Return value:	The memset() function returns a pointer to the memory area s.
		This function returns a pointer to the memory area str.
Ext. function:
Turn in files:
Prototype:	void *memset(void *s, int c, size_t n)// man memset
Parameters:	s − This is a pointer to the block of memory to fill.
		c − This is the value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.
		n − This is the number of bytes to be set to the value.
Observation:	Necessario utilize the hearder file "#include <stddef.h" for use the command size_t.
***************************************************************************/
/***************************************************************************
FUNCTION REVISED - OK !
***************************************************************************/
#include <stdio.h>
#include <string.h>

void    *ft_memset(void *s, int c, size_t n)
{
/*
O tipo size_t armazena o tamanho de qualquer tipo de objeto, em bytes. É um apelido para um tipo inteiro que aceita apenas valores positivos (unsigned).
Não se pode assumir que size_t é equivalente a um unsigned int – seu tamanho exato é dependente da plataforma.
*/
    size_t i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = c;
        i++;
    }
    return (s);
}

int main () {
   char str[50];

   strcpy(str,"Everton");
   puts(str);

   ft_memset(str,'7', 4);
   puts(str);
   
   return(0);
}
