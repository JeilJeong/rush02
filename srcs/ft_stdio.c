/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong </var/mail/jejeong>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 18:44:37 by jejeong           #+#    #+#             */
/*   Updated: 2020/07/18 20:05:33 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	ft_perror(int errno)
{
	if (errno == -1)
	{
		ft_putstr("Error\n");
	}
	else if (errno == -2 || errno == -3)
	{
		ft_putstr("Dict Error\n");
	}
}
