/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong </var/mail/jejeong>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 17:46:08 by jejeong           #+#    #+#             */
/*   Updated: 2020/07/18 20:02:24 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_stdio.h"

int		ft_valid_range_arg(int range)
{
	if (range > 3)
		return (-1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int errno;
	char c;

	i = 0;
	if ((errno = ft_valid_range_arg(argc)) < 0)
	{
		ft_perror(errno);
		return (0);
	}
	c = argv[0][0];
}
