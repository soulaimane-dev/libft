/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:56:30 by sbouabid          #+#    #+#             */
/*   Updated: 2023/11/07 11:31:27 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrlen(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*convert_to_str(int temp, int n)
{
	int		len;
	char	*nbr;
	int		max;

	if (n == 0)
		len = 1;
	else
		len = nbrlen(n) + temp;
	max = len;
	nbr = malloc(len + 1);
	if (!nbr)
		return (NULL);
	while (len > temp)
	{
		nbr[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	if (temp == 1)
		nbr[0] = '-';
	nbr[max] = '\0';
	return (nbr);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		temp;

	if (n == -2147483648)
	{
		nbr = malloc(12);
		if (!nbr)
			return (NULL);
		ft_strlcpy(nbr, "-2147483648", 12);
		return (nbr);
	}
	temp = 0;
	if (n < 0)
	{
		temp = 1;
		n *= -1;
	}
	nbr = convert_to_str(temp, n);
	return (nbr);
}
