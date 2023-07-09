/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:46:03 by event             #+#    #+#             */
/*   Updated: 2023/07/09 20:48:13 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (dest[j])
		j++;
	i = 0;
	if (j < size)
	{
		while (src[i] && i < size - j - 1)
		{
			dest[j + i] = src[i];
			i++;
		}
		dest[j + i] = '\0';
	}
	else
		j = size;
	while (src[i])
		i++;
	return (j + i);
}

/*int	main(int argc, char *argv[])
{
	char			*dest1;
	char			*dest2;
	char			*s[2];
	unsigned int	size;
	unsigned int	n;

	if (argc == 4)
	{
		s[0] = "strlcat = '%zu', dest = '%s'\n";
		s[1] = "ft_strlcat = '%u', dest = '%s'\n";
		n = atoi(argv[3]);
		size = strlen(argv[1]) + strlen(argv[2]) + 1;
		dest1 = malloc(size * sizeof(char));
		dest2 = malloc(size * sizeof(char));
		strcpy(dest1, argv[1]);
		strcpy(dest2, argv[1]);
		printf("src = '%s', dest = '%s', n = %d\n\\/\n", argv[2], argv[1], n);
		printf(s[0], strlcat(dest1, argv[2], n), dest1);
		printf(s[1], ft_strlcat(dest2, argv[2], n), dest2);
	}
	else
		printf("required 's1' 's2' 'n'\n");
}*/
