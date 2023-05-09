/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouchel <rmouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:05:53 by rmouchel          #+#    #+#             */
/*   Updated: 2023/05/09 16:19:35 by rmouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	len_src = 0;
	while (src[len_src])
		len_src++;
	if (dstsize == 0)
		return (len_src);
	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	len_dst = i;
	j = 0;
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		++i;
		++j;
	}
	if (len_dst < dstsize)
		dst[i] = '\0';
	return (len_dst + len_src);
}


/**
 * @file
 * @brief      Concatène deux chaînes de caractères en une seule chaîne de caractères, en vérifiant la taille maximale autorisée pour la chaîne de destination.
 *
 * @param[out] dst        La chaîne de caractères de destination.
 * @param[in]  src        La chaîne de caractères source.
 * @param[in]  dstsize    La taille maximale autorisée pour la chaîne de caractères de destination.
 *
 * @return     La longueur totale de la chaîne qui aurait été créée si la taille maximale de destination avait été suffisante, sans tenir compte du caractère nul de fin.
 *
 * @details    La fonction ft_strlcat procède comme suit :
 *             1. Calcule la longueur totale de la chaîne de caractères source en utilisant une boucle while.
 *             2. Parcourt la chaîne de caractères de destination en utilisant une boucle while pour trouver sa longueur actuelle.
 *             3. Concatène les caractères de la chaîne de caractères source dans la chaîne de caractères de destination jusqu'à ce que la taille maximale autorisée soit atteinte ou que la fin de la chaîne de caractères source soit atteinte.
 *             4. Insère un caractère nul de fin à la fin de la chaîne de caractères de destination, si la longueur de la chaîne de destination est inférieure à la taille maximale autorisée.
 *             5. Retourne la longueur totale de la chaîne qui aurait été créée si la taille maximale de destination avait été suffisante, sans tenir compte du caractère nul de fin.
 */