/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschulz- <aschulz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 14:23:00 by aschulz-          #+#    #+#             */
/*   Updated: 2026/05/15 15:47:18 by aschulz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int main(int argc, char **argv)
{
	int i;
	int j;
	
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i++;
		write (1, "\n", 1);
	}
}

//com putchar

#include <unistd.h>

int ft_putchar(char *str);

int main(int argc, char **argv)
{
	int i;
	int j;
	
	i = 1;
	while ( i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(&argv[i][j])
			j++
		}
		i++;
		ft_putchar('\n')
	}
}
