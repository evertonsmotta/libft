/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:58:01 by evdos-sa          #+#    #+#             */
/*   Updated: 2022/11/06 13:08:37 by evdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************************
Description:
A função strnstr localiza a primeira ocorrência da string terminada em nulo 
\c little na string "\c big", onde não mais do que "\c len" caracteres são 
pesquisados. Os caracteres que aparecem após um caractere \0 não são 
pesquisados. Como a função strnstr é uma API específica do FreeBSD, ela deve 
ser usada apenas quando a portabilidade não for uma preocupação.

Parameters:
	- const char *big:	onde se procura;
	-	const char *little:	o que se procura;
	- size_t len:	quantidade de caracteres pesquisados;

Return:
	- Se little é uma string vazia, big é devolvido;
	- E se little ocorre em nenhum lugar big, NULL é retornado;
	- Caso contrário, um ponteiro para o primeiro caractere da primeira 
	ocorrência de little é devolvido.
**************************************************************************/
char	*ft_strnstr(const char *big, const char *little, size_t len)//	man
{
	unsigned int	i;
	unsigned int	j;

	//Se little é uma string vazia, big é devolvido;
	if(len == '\0')
		return(big);
	i = 0;
	j = 0;
	//Ponteiro para o 1st caractere da 1st ocorrência de little é devolvido.
	while(i < len)
	{
		while(little[i] == big[j + i])
		{
			if(i + 1 == len)
			{
				return(big + i);
			}
			i++;
		}
		i = 0;
		j++;
	}
	//E se little nao for encontrada em big, NULL é retornado;
	return('\0');
}

//O seguinte define o ponteiro ptr como NULL, pois apenas os primeiros 4 
//caracteres de largestring são pesquisados:
int	main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
 
	ptr = ft_strnstr(largestring, smallstring, 4);

	return (0);
}