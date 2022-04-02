/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:41:04 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/01 17:48:47 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <stdint.h>
#include <iostream>

typedef struct s_data { int num; } Data;

uintptr_t	serialize( Data* ptr );
Data*		deserialize( uintptr_t raw );


#endif
