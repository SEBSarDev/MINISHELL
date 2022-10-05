/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd_com.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssar <ssar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 17:38:15 by ssar              #+#    #+#             */
/*   Updated: 2021/06/08 19:28:54 by ssar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/parse.h"

void	pwd_command(t_sh *sh, char *spl)
{
	actual_path(sh);
	write(1, sh->path, sh->size_path);
	write(1, "\n", 1);
}