/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:38:27 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/12 12:51:08 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

TIRADO DA PISCINE! C04EX03
**************************************************************************/
int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	res;

	i = 0;
	negative = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * negative);
}
/*
#include <stdio.h>

int 	main(void)
{
	int result;

	result = ft_atoi(" 		--++-12Z1");
	printf("%d\n", result);
	return (0);
}*/
