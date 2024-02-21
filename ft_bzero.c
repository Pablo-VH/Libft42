/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:20:37 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 17:09:54 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = 0;
		n--;
		str++;
	}
}

/*int main(void)
{
	char s[] = "Hola";
	size_t n = 4;
	printf("s = %s\n", s);
	printf("n = %zu\n", n);
	ft_bzero(s, n);
	printf("s = %s\n", s);
	return (0);
}*/