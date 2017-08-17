/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 12:48:10 by Lulu              #+#    #+#             */
/*   Updated: 2017/08/15 16:11:00 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int     ft_strlen(char *src)
{
    int     i;

    i = 0;
    while (src[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char    *dest;
    int     i;

    i= 0;
    if(!(dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
        return (NULL);
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    printf("%s\n", ft_strdup(av[1]));
    //printf("%s", strdup(av[1]));
}