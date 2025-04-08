/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfararan <nfararan@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:12:07 by nfararan          #+#    #+#             */
/*   Updated: 2025/04/08 11:26:19 by nfararan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./mlx_linux/mlx.h"

int	main(void)
{
	printf("Hello World\n");
	void  *mlx;
	mlx = mlx_init();
	mlx_destroy_display(mlx);
	return (0);
}
