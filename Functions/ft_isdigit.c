/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:55:10 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/12 13:00:57 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function: ft_isdigit
Header FIle: <ctype.h>
Functionality: Verification of numerics caracters.
Return: IF digit, return valuer diferent of zero. IF NOT digit, return zero.
Prototype: int isdigit(int argument)
Observation: Even though, isdigit() takes integer as an argument, character is passed to the function. Internally, the character is converted to its ASCII value for the check.
*/
int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c",&c);

    if (ft_isdigit(c) == 0)
         printf("%c is not a digit.",c);
    else
         printf("%c is a digit.",c);

    if (isdigit(c) == 0)
         printf("%c is not a digit.",c);
    else
         printf("%c is a digit.",c);
    return 0;
}*/
