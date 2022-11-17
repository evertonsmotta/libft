/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:55:43 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/12 13:01:18 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Descrição:	Procura a primeira ocorrência do caractere c (um char sem sinal) nos primeiros n bytes da string apontada pelo argumento str.

Declaração:	void *memchr(const void *str, int c, size_t n)

Parâmetros:	str − Este é o ponteiro para o bloco de memória onde a busca é realizada.

		c − Este é o valor a ser passado como um int, mas a função realiza uma busca byte por byte usando a conversão unsigned char deste valor.

		n − Este é o número de bytes a serem analisados.

Retorno:	Um ponteiro para o byte correspondente;
		NULL se o caractere não ocorrer na área de memória especificada. 
**************************************************************************/
/**************************************************************************

**************************************************************************/

#include <stdlib.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned int    i;
    const char  *str;
    
    str = s;        
    i = 0;
    if(str[i] == '\0')
        return ('\0');
    while(str[i])
    {
        while(str[i] == (unsigned char)c)
        {
            return ((char *)&str[i]);
        }
        i++;
    }
    return ('\0');
}

#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "E.Mota";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
