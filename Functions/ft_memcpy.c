/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:56:10 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/05 13:46:26 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************************
//dest − Este é um ponteiro para a matriz de destino onde o conteúdo deve
//ser copiado, convertido para um ponteiro do tipo void*.
//src − Este é um ponteiro para a fonte de dados a ser copiada, convertida 
//para um ponteiro do tipo void*.
//n − Este é o número de bytes a serem copiados.
**************************************************************************/
/**************************************************************************
FUNCTION REVISED - OK !
**************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void  *ft_memcpy(void *dest, const void *src, size_t n)
{
  int    i;
  int    j;
  
  i = 0;
  j = 0;
  while(i < n)
  {
    ((unsigned char *)dest)[i] = ((unsigned char *)src)[j];
    i++;
    j++;
  }
}

int main () {
  const char src[10] = "E.Mota";
  char dest[10];
  strcpy(dest,"Heloooo!!");
  printf("Before memcpy dest = %s\n", dest);
  ft_memcpy(dest, src, strlen(src)+1);
  printf("After memcpy dest = %s\n", dest);
   
  return(0);
}