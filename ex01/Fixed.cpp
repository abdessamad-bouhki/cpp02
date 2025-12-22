#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed(const int)
{
    
}
Fixed::Fixed(void)
{
    setRawBits(0);
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fix)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fix;
}
Fixed &Fixed::operator=(const Fixed &fix)
{
    if (this == &fix)
        return (*this);
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw_value = fix.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return raw_value;
}

void Fixed::setRawBits( int const raw )
{
    raw_value = raw;
}
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}
