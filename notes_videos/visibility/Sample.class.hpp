/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:29:04 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/14 12:41:54 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {
public:

	int publicFoo;

	Sample( void );
	~Sample( void );

	void	publicBar( void ) const;

private:
	int		_privateFoo;

	void	_privateBar( void ) const;
};

#endif