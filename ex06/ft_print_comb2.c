/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malag:wq      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:32:19 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/17 14:36:40 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	numeros(char n3, char n4);

void	print(char n1, char n2, char n3, char n4);

void	numeros(char n1, char n2)
{
	char	n3;
	char	n4;

	n3 = n1;
	while (n3 <= '9')
	{
		n4 = '0';
		if (n3 == n1)
			n4 = n2 +1;
		while (n4 <= '9')
		{
			print(n1, n2, n3, n4);
			n4++;
		}
		n3++;
	}	
}

void	print(char n1, char n2, char n3, char n4)
{
	if ((n3 != '0') || (n4 != '1'))
		write (1, ", ", 2);
	write (1, &n1, 1);
	write (1, &n2, 1);
	write (1, &" ", 1);
	write (1, &n3, 1);
	write (1, &n4, 1);
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;

	n1 = '0';
	while (n1 <= '9')
	{
		n2 = '0';
		while (n2 <= '9')
		{
			numeros(n1, n2);
			n2++;
		}
		n1++;
	}
}
