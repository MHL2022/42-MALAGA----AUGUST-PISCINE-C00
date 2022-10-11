/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malag:wq      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:32:26 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/15 13:37:00 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char		negativo;
	char		positivo;

	negativo = 'N';
	positivo = 'P';
	if (n >= 0)
	{
		write (1, &positivo, 1);
	}
	else
	{
		write (1, &negativo, 1);
	}
}
