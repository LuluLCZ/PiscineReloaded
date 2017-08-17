/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 19:50:45 by nsayah            #+#    #+#             */
/*   Updated: 2017/04/14 18:57:59 by nsayah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    last_word(char *str)
{
    int     i = 0;
    int     j = 0;

    while (str[i])
    {
        if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 127)
            j = i + 1;
        i++;
    }
    while (str[j] >= 33 && str[j] <= 127)
    {
        write(1, &str[j], 1);
        j++;
    }
}

int     main(int argc, char **argv)
{
    if (argc == 2)
        last_word(argv[1]);
    write(1, "\n", 1);
    return (0);
}
