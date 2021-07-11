/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:45:31 by athach            #+#    #+#             */
/*   Updated: 2021/07/11 21:36:13 by athach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int ac, char **av)
{
	char	*tab = ft_newstr(av[1]);

	if (ac == 2)
	{
		printf("%d\n", ft_strlen(av[1]));
		//printf("%d\n", ft_newstr(av[1]));
		printf("%s", tab);
	}
	else
		write(1, "Error\n", 6);
}
