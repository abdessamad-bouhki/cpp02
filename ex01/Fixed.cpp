#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(num * (1 << fractional_bits));
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(num * (1 << fractional_bits)));
}

float Fixed::toFloat( void ) const
{
    float value = (float)getRawBits() / (1 << fractional_bits);
    return value;
}

int Fixed::toInt( void ) const
{
    int value = getRawBits() / (1 << fractional_bits);
    return value;
}

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    setRawBits(0);
}

Fixed::Fixed(const Fixed &fix)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fix;
}

Fixed &Fixed::operator=(const Fixed &fix)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw_value = fix.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed& obj)
{
    out << obj.toFloat();
    return out;
}

int Fixed::getRawBits(void) const
{
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
