/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:24:27 by adpassar          #+#    #+#             */
/*   Updated: 2022/10/12 16:40:06 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
	{
		return ((char *)s);
	}
	return (NULL);
}
/*int main()
{
    char str[] = "peppapig";
    char c = 'a';
    char *ptr;
    ptr = ft_strchr(str,c);
    printf("%s",ptr);
}*/
/*strchr returns a poiter to the first occurrence
of the character c in the string s*/
