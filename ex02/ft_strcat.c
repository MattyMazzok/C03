/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:45:09 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/11 14:54:18 by mmazzocc         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	*ptr = dest + strlen(dest);
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
