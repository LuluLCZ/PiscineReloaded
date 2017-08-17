/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:11:34 by Lulu              #+#    #+#             */
/*   Updated: 2017/08/15 19:58:35 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int     *ft_range(int min, int max)
{
    int     *tab;
    int     i;

    i = 0;
    if (min >= max)
        return (0);
    if (!(tab = (int *)malloc(sizeof(int) * (max + min) + 1)))
        return (0);
    while (min <= max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    tab[i] = '\0';
    return (tab);
}

int     main(int ac, char **av)
{
    int     *tab;
    int     i;
    (void)ac;
    (void)av;

    tab = ft_range(0, 10);
    i = 0;
    while (i < 11)
    {
        printf("%d", tab[i]);
        i++;
    }
    return (0);
}