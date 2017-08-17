/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 12:12:43 by Lulu              #+#    #+#             */
/*   Updated: 2017/08/14 12:46:34 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
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
        a++;
    return (s1[a] - s2[a]);
}

void	aff(char **argv)
{
	int nb;

	nb = 1;
	while (argv[nb])
	{
		ft_putstr(argv[nb]);
		ft_putchar('\n');
		nb++;
	}
}

int		main(int argc, char **argv)
{
	int		nb;
	char	*tmp;

	tmp = 0;
	nb = 1;
	if (argc <= 1)
		return (0);
	while (argv[nb + 1] != '\0')
	{
		if (ft_strcmp(argv[nb], argv[nb + 1]) > 0)
		{
			tmp = argv[nb + 1];
			argv[nb + 1] = argv[nb];
			argv[nb] = tmp;
			nb = 0;
		}
		nb++;
	}
	nb = 1;
	aff(argv);
	return (0);
}