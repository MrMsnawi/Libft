/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmasnao <abmasnao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:19:43 by abmasnao          #+#    #+#             */
/*   Updated: 2024/11/11 12:31:14 by abmasnao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*buf;
	size_t			i;

	i = 0;
	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	buf = malloc(count * size);
	if (!buf)
		return (NULL);
	while (i < count * size)
	{
		buf[i] = 0;
		i++;
	}
	return (buf);
}
