/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:15:23 by arlaine           #+#    #+#             */
/*   Updated: 2018/11/09 13:18:20 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*copy;
	size_t	i;

	i = 0;
	copy = (char *)s;
	while (i < n)
	{
		copy[i] = '\0';
		i++;
	}
}
