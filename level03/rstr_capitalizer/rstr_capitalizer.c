/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 20:52:19 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/07 21:33:06 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rstr_capitalizer(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] -= 32;
        i++;
    }
    write(1, str, i);
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    int i;

    if (ac < 2)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < ac)
        {
            rstr_capitalizer(av[i]);
            i++;
        }
    }
    return (0);
    
}