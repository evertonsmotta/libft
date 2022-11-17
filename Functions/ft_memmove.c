/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:56:18 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/13 10:43:57 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************************
QUANDO TESTADA NO PYTHONTUTOR, CORRE BEM. O 1ST E O CORRETO
**************************************************************************/
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
			d[i] = s[i];
			i++;
	return (dst);
}
/*
void  *ft_memmove(void *dest, const void *src, size_t n)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  if(n == 0)
  	return(dest);
  while(i < n)
  {
  	while(src[i])
  	{
  		((unsigned char *)dest)[i] = ((unsigned char *)src)[j];
  		i++;
  		j++;
    	}
  }
}

void  *ft_memmove(void *dest, const void *src, size_t n)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  if(n == 0)
    return (dest);
  while(i < n)
  {
    while(((unsigned char *)src)[j])
    {
      ((unsigned char *)dest)[i] = ((unsigned char *)src)[j];
      i++;
      j++;
    }
  }
}
*/

int main ()
{
   char dest[] = "e.mota";
   const char src[]  = "E.Mota";
   
   char a[15];
   char b[] = "minha nossa";
   int n = 15;

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, sizeof(char) * 6);
   printf("After memmove dest = %s, src = %s\n\n", dest, src);
   
   printf("%s", ft_memmove(a, b, n));

   return(0);
}

	

#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("memmove(dest, src, 9);");
   printf("\n");
   printf("After memmove dest = %s, src = %s\n", dest, src);
   
   printf("\n");
   
   char dest2[] = "olds";
   const char src2[]  = "news";

   printf("Before memmove dest2 = %s, src2 = %s\n", dest2, src2);
   memmove(dest, src, 0);
   printf("memmove(dest, src, 0);");
   printf("\n");
   printf("After memmove dest2 = %s, src2 = %s\n", dest2, src2);
   
   printf("\n");
   
   char dest3[] = "olds";
   const char src3[]  = "news";
   
   printf("Before memmove dest = %s, src = %s\n", dest3, src3);
   memmove(dest, src, 10);
   printf("memmove(dest, src, 10);");
   printf("\n");
   printf("After memmove dest = %s, src = %s\n", dest3, src3);
   
   printf("\n");
   
   char dest4[] = "olds";
   const char src4[]  = "news";

   printf("Before memmove dest = %s, src = %s\n", dest4, src4);
   memmove(dest, src, 0);
   printf("memmove(dest, src, 0);");
   printf("\n");
   printf("After memmove dest = %s, src = %s\n", dest4, src4);

   return(0);
}
