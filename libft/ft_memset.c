/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:04:51 by arlaine           #+#    #+#             */
/*   Updated: 2018/11/23 16:42:58 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*copy;
	size_t	i;

	i = 0;
	copy = (char *)s;
	while (i < n)
	{
		copy[i] = c;
		i++;
	}
	return (copy);
}
