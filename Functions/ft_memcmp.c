/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:55:56 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/18 20:39:01 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	const char		*str1;
	const char		*str2;

	str1 = s1;
	str2 = s2;
	i = 0;
	if (i <= n)
	{
		while ((str1[i] == str2[i]) && str1[i] && str2[i])
		i++;
	}
	return (str1[i] - str2[i]);
}
/*
int main () {
   char strA[10];
   char strB[10];
   int ret;

   memcpy(strA, "abc", 4);
   memcpy(strB, "abca", 4);

   ret = ft_memcmp(strA, strB, 4);

   if(ret > 0) {
      printf("strB is less than strA");
   } else if(ret < 0) {
      printf("strA is less than strB");
   } else {
      printf("strA is equal to strB");
   }
   
   return(0);
}*/