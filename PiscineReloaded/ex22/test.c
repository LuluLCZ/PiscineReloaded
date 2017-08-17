/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 20:08:18 by Lulu              #+#    #+#             */
/*   Updated: 2017/08/15 20:14:22 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_abs.h"

int     main(void)
{
    int Value3;
    int Value1;
    int Value2;

    Value3 = -95;
    Value1 = 0;
    Value2 = 95;
    printf("%d\n", ABS(Value3));
    printf("%d\n", ABS(Value2));
    printf("%d\n", ABS(Value1));
    return (0);

}