/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:08:59 by avannson          #+#    #+#             */
/*   Updated: 2024/11/20 21:17:07 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char c)
{
	if ((c > 31) && (c < 127))
		return (1);
	return (0);
}
