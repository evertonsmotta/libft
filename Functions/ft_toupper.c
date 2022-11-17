/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:58:42 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/12 13:02:11 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Function: ft_toupper
Header FIle: <ctype>
Functionality: converts lowercase letter to uppercase.
Return: This function returns uppercase equivalent to c, if such value exists, else c remains unchanged. The value is returned as an int value that can be implicitly casted to char.
Prototype: int toupper(int c)
Parameters: c − This is the letter to be converted to uppercase.
Observation: A diferença entre maiúscula (A = 65) para minúscula (a = 97) é 32 na ASCII.
***************************************************************************/

int	ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        c = c - 32;
    }
    return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main ()
{
   int i = 0;
   char str[] = "EverTON";
   
   while(str[i]) {
      putchar (toupper(str[i]));
      i++;
   }
   return(0);
}*/
