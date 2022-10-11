/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malag:wq      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:21:07 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/15 12:26:58 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char		ascii;
	int			numero;

	numero = 0;
	while (numero <= 9)
	{
		ascii = numero + '0';
		write (1, &ascii, 1);
		numero++;
	}
}
