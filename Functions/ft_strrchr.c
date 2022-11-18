/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:58:11 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/18 21:09:11 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	i = 0;
	if (str[i] == '\0')
		return ('\0');
	i = 0;
	while (str[i])
	{
		if ((char)c == str[len])
		{
			return ((char *)&str[len]);
		}
		len--;
	}
	return ('\0');
}
/*
int main ()
{
   const char str[] = "Everton.S. Mota";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("%s\n", ret);
   
   ret = strrchr(str, ch);
   
   printf("%s\n", ret);
   
   return(0);
}
*/