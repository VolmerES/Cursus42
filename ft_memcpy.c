/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:33:21 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/12 16:43:00 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *destination, const void *source, size_t num)
{
	const unsigned char *s;
	unsigned char *d;
	int i;

	d = (unsigned char *) destination;
	s = (const unsigned char *) source;
	i = 0;

	while (i < num)
	{
		d[i] = s[i];
		i++;
	}
	return (destination);
}

int	main(void)
{
	char src[] = "Hola mundo";
	char dest[20];

	ft_memcpy(dest, src, 11);

	size_t i = 0;
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}

	return (0);
}
