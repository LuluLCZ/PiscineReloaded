/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 11:46:12 by Lulu              #+#    #+#             */
/*   Updated: 2017/08/14 11:51:51 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb)
{
    int     i;

    i = 0;
    while (i * i <= nb)
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2)
        printf("%d", ft_sqrt(atoi(av[1])));
    return (0);
}