/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:07:54 by event             #+#    #+#             */
/*   Updated: 2023/07/09 19:24:03 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (NULL);
}

/*int	main(int argc, char *argv[])
{
	char	*s;

	s = "String: %s\nSearch: %s\nFound: %s\n";
	if (argc == 3)
	{
		printf(s, argv[1], argv[2], ft_strstr(argv[1], argv[2]));
	}
	else
		printf("Usage: %s <string> <substring>\n", argv[0]);
}*/
