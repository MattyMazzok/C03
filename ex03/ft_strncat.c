/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:56:59 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/11 14:59:40 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	tmp;

	tmp = 0;
	while (str[tmp] != '\0')
	{
		tmp++;
	}
	return (tmp);
}

char	*ft_strcat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	*ptr = dest + strlen(dest);
	while (*src != '\0' && nb--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
