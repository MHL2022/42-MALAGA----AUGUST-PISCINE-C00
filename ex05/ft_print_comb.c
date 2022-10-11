/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malag:wq      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:39:49 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/17 14:41:02 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a != '7')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	int		n1;
	int		n2;
	int		n3;

	n1 = '0';
	while (n1 <= '9')
	{
		n2 = n1 +1;
		while (n2 <= '9')
		{
			n3 = n2 +1;
			while (n3 <= '9')
			{					
				print(n1, n2, n3);
					n3++;
			}
				n2++;
		}
			n1++;
	}
}
