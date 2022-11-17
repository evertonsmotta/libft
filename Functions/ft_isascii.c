/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:54:50 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/05 12:09:26 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/******************************************************************************
Function: ft_isascii

Header FIle: <ctype.h>

Functionality: O isascii()função testa se um determinado caractere, na localidade atual, pode ser representado como um caractere US-ASCII de 7 bits válido.

Return: Retorna diferente de zero se c , na localidade atual, pode ser representado como um caractere no caractere US-ASCII de 7 bits definir. Caso contrário, retorna 0.

Prototype: int isascii(int argument)

Observation: A tabela ascii, na sua versão completa, possui 255 caracteres.
O comportamento desta função pode ser afetado pela categoria LC_CTYPE da localidade atual. Esta função não está disponível quando LOCALETYPE(*CLD) é especificado no comando de compilação. Para obter mais informações, consulte Noções básicas sobre CCSIDs e localidades.
*******************************************************************************/
int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
        return (1);
    return (0);
}
/*
#include<stdio.h>
#include<ctype.h>
int	main()
{
  char val='7';

  if(ft_isascii(val))
    printf("This is ascii character \n");
   else
    printf("This is not ascii character \n");

  if(isascii(val))
    printf("This is ascii character \n");
   else
    printf("This is not ascii character \n");
  return 0;
}*/
