/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:45:23 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/17 20:51:00 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** *
Parameters:
	s1: The string to be trimmed.
	set: The reference set of characters to trim.
		 O conjunto de referência de caracteres a serem cortados.
Return value:
	The trimmed string.
	NULL if the allocation fails.
External functs:
	malloc
Description:
	Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
	Aloca (com malloc(3)) e retorna uma cópia de
 's1' com os caracteres especificados em 'set' removidos
 desde o início e o fim da string.
* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	
}