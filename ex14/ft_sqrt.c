/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschulz- <aschulz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 09:57:19 by aschulz-          #+#    #+#             */
/*   Updated: 2026/05/15 13:28:29 by aschulz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;     //variavel que vai testar candidatos a raiz quadrada
	
	n = 1;      //começa testando a partir do um   
	while ( n * n != nb)   //enquanto n² não for igual a nb...
	{
		if (n > nb / n)  //se n já ultrapassou a possivel raiz
			return (0);   //não ha raiz inteira, retorna zero
		n++;   //incrementa para o priximo candidato
	}
	return (n);  //retorna a raiz
}

#include <stdio.h>

int main (void)
{
	printf("%i\n", ft_sqrt(4));
	return (0);
}