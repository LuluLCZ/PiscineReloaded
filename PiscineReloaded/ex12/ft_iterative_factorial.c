/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 20:20:59 by Lulu              #+#    #+#             */
/*   Updated: 2017/08/12 20:30:58 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int resultat;
	int i;

	i = 2;
	resultat = 1;
	if (nb == 0)
		resultat = 1;
	else if (nb < 0 || nb > 12)
		resultat = 0;
	while (i <= nb && nb < 13 && nb > 0)
	{
		resultat = resultat * i;
		i++;
	}
	return (resultat);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}
