/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 13:28:44 by llacaze           #+#    #+#             */
/*   Updated: 2017/09/19 13:50:22 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int     ft_strcmp(char *s1, char *s2)
{
    int     a;

    a = 0;
    while (s1[a] && s2[a] && s1[a] == s2[a])
    {
        a++;
    }
    return (s1[a] - s2[a]);
}

void    aff(char **av)
{
    int     i;

    i = 1;
    while (av[i])
    {
        ft_putstr(av[i]);
        ft_putchar('\n');
        i++;
    }
}

int     main(int ac, char **av)
{
    int     i;
    char    *tmp;

    i = 0;
    tmp = 0;
    if (ac <= 1)
        return (0);
    while (av[i + 1] != '\0')
    {
        if (ft_strcmp(av[i], av[i + 1]) > 0)
        {
            tmp = av[i];
            av[i] = av[i+1];
            av[i+1] = tmp;
            i = 0;
        }
        i++;
    }
    aff(av);
    return (0);
}