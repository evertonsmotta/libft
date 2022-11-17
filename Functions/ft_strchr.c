/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:56:41 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/05 12:17:33 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************************
Header File: #include <string.h>
Description: Returns a pointer to the first occurrence of the 
character c in the string s.
Return: A pointer to the matched character;
        NULL if the character is not found;
        The terminating null byte is considered part of the string, so that 
        if c is specified as '\0', these functions return a pointer to the 
        terminator.//man
        Searches for the first occurrence of the character c (an unsigned char)
        in the string pointed to by the argument s.
Prototype:  char *strchr(const char *s, int c)//man
Parameters: 
Obs.:   O retorno será a partir da primeira correspondência dentro da string 
onde se busca.
**************************************************************************/
/**************************************************************************
FUNCTION REVISADA - OK !!!
**************************************************************************/
#include <stdio.h>
#include <string.h>

char    *ft_strchr(const char *s, int c)
{
    unsigned int    i;
    
    i = 0;
    if(s[i] == '\0')
        return ('\0');
    while(s[i])
    {
        while(s[i] == (char)c)
        {
            return ((char *)&s[i]);
        }
        i++;
    }
    return ('\0');
}

int main ()
{
   const char str[] = "E.Mota";
   const char ch = '7';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
