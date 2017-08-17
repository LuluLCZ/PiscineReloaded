/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 20:31:57 by Lulu              #+#    #+#             */
/*   Updated: 2017/08/14 11:44:57 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     ft_recursive_factorial(int nb)
{
    int     resultat;
    int     i;

    i = nb;
    resultat = 1;
    if (nb > 12 || nb < 0)
        resultat = 0;
    else if (nb == 0)
        resultat = 1;
    else
    {
        if (nb < 13 && nb > 0)
            resultat = nb * ft_recursive_factorial(nb - 1);
    }
    return (resultat);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        printf("%d", ft_recursive_factorial(atoi(av[1])));
    return (0);
}