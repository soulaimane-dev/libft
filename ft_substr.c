/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:54:33 by sbouabid          #+#    #+#             */
/*   Updated: 2023/11/05 12:50:22 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*temp(char *ptr)
{
	ptr = malloc(1);
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = NULL;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		ptr = temp(ptr);
		return (ptr);
	}
	if (ft_strlen(s) - start < len)
		ptr = malloc((ft_strlen(s) - start) + 1);
	else
		ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
