/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:17:47 by akhobba           #+#    #+#             */
/*   Updated: 2023/12/03 21:21:33 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int	i;

	i = 0;
	if (NULL == s)
	{	
		i = 6;
		write(1, "(null)", 6);
		return (i);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
// int main() { ft_putstr(NULL); }
