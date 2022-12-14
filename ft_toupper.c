/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:44:59 by adpassar          #+#    #+#             */
/*   Updated: 2022/10/10 17:45:59 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c -= 32);
	}
	return (c);
}
/*int main()
{
    char c = 'b';
    c = ft_toupper(c);
    printf("%c",c);
    return 0;
}*/
