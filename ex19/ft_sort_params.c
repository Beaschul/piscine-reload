/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschulz- <aschulz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:51:40 by aschulz-          #+#    #+#             */
/*   Updated: 2026/05/15 19:06:37 by aschulz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//comparar, caso  der negativo  siginifica que o segundo argumento é maior, ai precisamos trocar a posição para ordem assci


int ft_strcpm(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1 != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
} //se der negativo, significa que s2 > s1, precisa trocar de lugar pra ficar na ordem

void ft_swapa(char **s1, char **s2)
{
	char *temp;
	int i;
	
	*temp = argv[]
	
}


int main (int argc, char **argv)
{
	
}