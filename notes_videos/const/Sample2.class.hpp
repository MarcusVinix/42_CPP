/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:36:16 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/14 12:21:44 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE2_CLASS_H
# define SAMPLE2_CLASS_H

class Sample2 {
public:

	float const	pi;
	int			qd;

	Sample2( float const f );
	~Sample2( void );

	void	bar( void ) const;

};

#endif