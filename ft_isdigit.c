/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:26:51 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/11 15:18:43 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit (int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	main(void)
{
	int c = 'i';

	ft_isdigit(c);
	if (ft_isdigit(c) == 1)
		printf("Si que es un digito/n");
	else
		printf("No es un digito/n");

	return (0);
}
