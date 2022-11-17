/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:58:32 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/12 13:02:07 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Function: ft_tolower
Header FIle: <ctype.h>
Functionality: converts a given letter to lowercase.
Return: This function returns lowercase equivalent to c, if such value exists, else c remains unchanged. The value is returned as an int value that can be implicitly casted to char.
Prototype: int tolower(int c)
Parameters: c − This is the letter to be converted to lowercase.
Observation: A diferença entre maiúscula (A = 65) para minúscula (a = 97) é 32 na ASCII.
***************************************************************************/

int	ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
    {
        c = c + 32;
    }
    return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main ()
{
   int i = 0;
//   char c;
   char str[] = "EVERTON";
    
   while( str[i] )
   {
      putchar(ft_tolower(str[i]));
      i++;
   }
   
   return(0);
}*/	
