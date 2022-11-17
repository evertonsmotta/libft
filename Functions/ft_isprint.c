/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:55:21 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/12 13:01:08 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Function: ft_isprint
Header FIle: <ctype.h>
Functionality: Checks whether a character is a printable character or not.
Return: =! ZERO if arg is printable.
	ZERO if arg is not printable.
Prototype: int    isprint(int c)
Observation: Even though, isprint() takes integer as an argument, character is passed to the function. Internally, the character is converted to its ASCII value for the check.
****************************************************************************/

int	ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main () {
   int var1 = 'k';
   int var2 = '8';
   int var3 = '\t';
   int var4 = ' ';
    
   if( ft_isprint(var1) ) {
      printf("var1 = |%c| can be printed\n", var1 );
   } else {
      printf("var1 = |%c| can't be printed\n", var1 );
   }
   
   if( ft_isprint(var2) ) {
      printf("var2 = |%c| can be printed\n", var2 );
   } else {
      printf("var2 = |%c| can't be printed\n", var2 );
   }
   
   if( ft_isprint(var3) ) {
      printf("var3 = |%c| can be printed\n", var3 );
   } else {
      printf("var3 = |%c| can't be printed\n", var3 );
   }
   
   if( ft_isprint(var4) ) {
      printf("var4 = |%c| can be printed\n", var4 );
   } else {
      printf("var4 = |%c| can't be printed\n", var4 );
   }
   
   return(0);
}*/
