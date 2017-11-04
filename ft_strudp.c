/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strudp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 13:51:59 by llacaze           #+#    #+#             */
/*   Updated: 2017/09/19 13:59:08 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strudp(char *s1)
{
    char    *cpy;
    int     i;

    i = 0;
    if (!(cpy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)))
        return (NULL);
    while (s1[i] != '\0')
    {
        cpy[i] = s1[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}

int     main(int ac, char **av)
{
    int     i;

    i = 0;
    if (ac <= 1)
        return (0);
    printf("%s", ft_strudp(av[1]));
    return (0);
}