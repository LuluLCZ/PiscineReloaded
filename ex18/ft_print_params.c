/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 12:05:18 by Lulu              #+#    #+#             */
/*   Updated: 2017/08/14 12:11:56 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void     ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int     main(int ac, char **av)
{
    int     i;

    i = 1;
    if (ac != 0)
    {
        while (i != ac)
        {
            ft_putstr(av[i]);
            ft_putchar('\n');
            i++;
        }
    }
    return (0);
}