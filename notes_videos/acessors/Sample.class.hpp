/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:29:04 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/15 14:56:27 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {
public:


	Sample( void );
	~Sample( void );

	int		getFoo( void ) const;
	void	setFoo( int v );

private:
	int	_foo;
};

#endif