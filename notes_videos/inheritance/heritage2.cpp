#ifndef HERITAGE2_HPP
# define HERITAGE2_HPP

#include <iostream>
#include <string>

class Animal
{
private:
	int _numberOfLegs;
public:
	Animal( );
	Animal( Animal const & );
	Animal& operator=(Animal const &);
	~Animal( );

	void	run( int distance );
	void	call( );
	void	eat( std::string const & what );
	void	walk( int distance );
	
};

class Cat : public Animal
{
public:
	Cat( );
	Cat( Cat const & );
	Cat& operator=(Cat const &);
	~Cat( );

	void	scornSomeone( std::string const & target );

};

class Pony : public Animal
{
public:
	Pony( );
	Pony( Pony const & );
	Pony& operator=(Pony const &);
	~Pony( );

	void doMagic( std::string const & target );
};
#endif