#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << this->type << " constructor called" << std::endl;
}

Animal::Animal(std::string new_name) : type(new_name)
{
	std::cout << this->type << " name constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << this->type << " copy constructor called" << std::endl;
	*this = src;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	this->type = rhs.type;
	return(*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "L'ANIMAL" << std::endl;
}
