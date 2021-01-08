/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 20:44:48 by kpetrosy          #+#    #+#             */
/*   Updated: 2020/12/08 21:09:52 by kpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	factorial_recursive_factorial(int factorial, int num)
{
	factorial = num-- * factorial;
	if (num > 0)
	{
		return (factorial_recursive_factorial(factorial, num));
	}
	return (factorial);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (factorial_recursive_factorial(1, nb));
}
