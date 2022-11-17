/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:52:14 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/12 12:59:04 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function: ft_isalpha
//Header FIle: <ctype.h>
//Functionality: Verification of alphabetics caracters.
//Return:   IF alphabetics, return valuer diferent of zero.
//          IF NOT alphabetics, return zero.
//Prototype: int isalpha(int argument)
//Obs.: The argument (character) received will be converted to an integer,
//according to the ASCII table.
//ASCII (A = 65, Z = 90, a = 97, z = 122)

#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)

{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (ft_isalpha(c) == 0)
         printf("%c is not an alphabet.", c);
    else
         printf("%c is an alphabet.", c);
/*
    if (isalpha(c) == 0)
         printf("%c is not an alphabet.", c);
    else
         printf("%c is an alphabet.", c);

    return 0;*/
}
