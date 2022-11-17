/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:51:57 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/12 12:58:47 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function: ft_isalnum
//Header FIle: <ctype.h>
//Functionality: The isalnum() function checks whether the argument passed is 
//an alphanumeric character (alphabet or number) or not.
//Return: 1 IF argument is an alphanumeric character.
//	ZERO IF argument is neither an alphanumeric character.
//Prototype: int isalnum(int argument)
//Observation: The argument (character) received will be converted to an 
//integer, according to the ASCII table.
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
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
    scanf("%c", &c);

    if (ft_isalnum(c) == 0)
        printf("%c is not an alphanumeric character.", c);
    else
        printf("%c is an alphanumeric character.", c);

    if (isalnum(c) == 0)
        printf("%c is not an alphanumeric character.", c);
    else
        printf("%c is an alphanumeric character.", c);
    
    return 0;
}*/
