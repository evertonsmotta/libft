/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:56:41 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/18 20:45:44 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	if (s[i] == '\0')
		return ('\0');
	while (s[i])
	{
		while (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return ('\0');
}
/*
int main ()
{
   const char str[] = "E.Mota";
   const char ch = '7';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
*/