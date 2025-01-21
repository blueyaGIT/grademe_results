/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:44:30 by dalbano           #+#    #+#             */
/*   Updated: 2025/01/21 13:46:48 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int temp;
	int number;

	if (argc == 2)
	{
		temp = 1;
		number = atoi(argv[1]);
		if (number == 1)
			printf("1");
		while (number >= ++temp)
		{
			if (number % temp == 0)
			{
				printf("%d", temp);
				if (number == temp)
					break ;
				printf("*");
				number /= temp;
				temp = 1;
			}
		}
	}
	printf("\n");
	return (0);
}