/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschulz- <aschulz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 16:06:00 by aschulz-          #+#    #+#             */
/*   Updated: 2026/05/14 09:52:44 by aschulz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

#include <stdio.h>

int main(void)
{
	int a = 2;
	int b = 1;
	printf("antes: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("depois: a = %d, b = %d", a, b);
	return (0);
}