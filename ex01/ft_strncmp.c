/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 22:59:10 by event             #+#    #+#             */
/*   Updated: 2023/07/08 23:23:16 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
	}
	if (i == n)
		return (0);
	else if (s1[i])
		return (1);
	else if (s2[i])
		return (-1);
	else
		return (0);
}

/*int	main(int argc, char *argv[])
{
	char	*str = "s1: '%s'\ns2: '%s'\nresult: %d\n";

	if (argc == 3)
		printf(str, argv[1], argv[2], ft_strncmp(argv[1], argv[2], 3));
	else
		printf("please give two arguments to compare\n");
}*/
