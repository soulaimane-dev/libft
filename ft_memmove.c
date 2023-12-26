/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:41:21 by sbouabid          #+#    #+#             */
/*   Updated: 2023/11/01 08:58:46 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dst;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	while (len--)
	{
		ptr_dst[len] = ptr_src[len];
	}
	return ((void *)ptr_dst);
}
