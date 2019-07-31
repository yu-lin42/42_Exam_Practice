/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:40:46 by yu-lin            #+#    #+#             */
/*   Updated: 2019/07/24 16:22:48 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    if (ac != 2)
        write(1, "\n", 1);
    else
    {
        while (av[1][i])
        {
            j = av[1][i];
            if ((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
            {
                if (av[1][i] == 'z')
                    j = 'a';
                else if (av[1][i] == 'Z')
                    j = 'A';
                else
                    j++;
            }
            write(1, &j, 1);
            i++;
        }
        write(1, "\n", 1);
    }
    return (0);
}
