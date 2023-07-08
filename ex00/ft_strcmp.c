/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:52:50 by event             #+#    #+#             */
/*   Updated: 2023/07/08 16:07:14 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
	}
	if (s1[i])
		return (1);
	else if (s2[i])
		return (-1);
	else
		return (0);
}

/*
int	main(int argc, char *argv[])
{
	char *str = "s1: '%s'\ns2: '%s'\nresult: %d\n";

	if (argc == 3)
		printf(str, argv[1], argv[2], ft_strcmp(argv[1], argv[2]));
	else
		printf("please give two arguments to compare\n");
}*/
