/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:49:36 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/12 12:53:20 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Function: ft_calloc
Header FIle: <sdtlib.h>
Functionality: Aloca a memória solicitada e retorna um ponteiro para ela. A diferença em malloc e calloc é que malloc não define a memória como zero, enquanto calloc define a memória alocada como zero.
Return: Essa função retorna um ponteiro para a memória alocada ou NULL se a solicitação falhar.
Prototype: void *calloc(size_t nitems, size_t size)
Parameters:	nmemb − Este é o número de elementos a serem alocados.
		size - Este é o tamanho dos elementos.
Observation: 
***************************************************************************/
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
*/
//A FUNCAO MAMSET DEVE SER RETIRADA E A "libft.h" INCLUIDA
void	*ft_memset(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
	while (i < n)
    {
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)//man calloc
{
	void	*dst;
	
	dst = (void *)malloc(size * nmemb);
	if(size == '\0')
		return ('\0');
	else
		ft_memset(dst, 0, (size * nmemb));
	return (dst);
}
/*
OUTPUT ESPERADO DA MAIN
#include <stdio.h>
#include <stdlib.h>

int main () {
   int i, n;
   int *a;
   
   n = 3;

   a = (int*)ft_calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free( a );
   
   return(0);
}
*/
