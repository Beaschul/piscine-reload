/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschulz- <aschulz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 10:11:02 by aschulz-          #+#    #+#             */
/*   Updated: 2026/05/18 11:52:11 by aschulz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_strlcpy(char *dest, char *src, int size)
{
	int i;
	int src_len;

	i = 0;
	src_len = ft_strlen(src); //quando chama a função n precisa por a tipagem (char)
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

char	*ft_strdup(char *src)
{
	int len;
	char *dest; // *dup
	
	if (!src)
		return (NULL);
	len = ft_strlen(src) + 1;
	dest = (char *)malloc((len) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, src, len);
	return (dest);
}

int main (void)
{
	char *dest = "nada"; 
	char *src = "não sei";
	
	printf("antes: src = %s, dest = %s\n", src, dest);
	dest = ft_strdup(src);
	printf("depois: src = %s, dest = %s", src, dest);
	return (0);
}
