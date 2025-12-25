#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed(const int num)
{
    setRawBits(num << fractional_bits);
}

Fixed::Fixed(const float num)
{
    setRawBits(roundf(num * (1 << fractional_bits)));  // why three way equation
}

float Fixed::toFloat( void ) const
{
    float value = (float)getRawBits() / (1 << fractional_bits);
    return value;
}

int Fixed::toInt( void ) const
{
    int value = getRawBits() / (1 << fractional_bits); // why
    return value;
}

Fixed::Fixed(void)
{
    setRawBits(0);
}

Fixed::Fixed(const Fixed &fix)
{
    *this = fix;
}

Fixed &Fixed::operator=(const Fixed &fix)
{
    this->raw_value = fix.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed& obj)
{
    out << obj.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed& obj) const
{
    return (this->raw_value > obj.raw_value);
}

bool Fixed::operator>=(const Fixed& obj) const
{
    return (this->raw_value >= obj.raw_value);
}

bool Fixed::operator<(const Fixed& obj) const
{
    return (this->raw_value < obj.raw_value);
}

bool Fixed::operator<=(const Fixed& obj) const
{
    return (this->raw_value <= obj.raw_value);
}

bool Fixed::operator==(const Fixed& obj) const
{
    return (this->raw_value == obj.raw_value);
}

bool Fixed::operator!=(const Fixed& obj) const
{
    return (this->raw_value != obj.raw_value);
}

Fixed Fixed::operator+(const Fixed& obj)
{
    Fixed tmp;
    tmp.raw_value = this->raw_value + obj.raw_value;
    return (tmp);
}

Fixed Fixed::operator-(const Fixed& obj)
{
    Fixed tmp;
    tmp.raw_value = this->raw_value - obj.raw_value;
    return (tmp);
}

Fixed Fixed::operator*(const Fixed& obj)
{
    Fixed tmp(this->toFloat() * obj.toFloat());
    return (tmp);
}

Fixed Fixed::operator/(const Fixed& obj)
{
    Fixed tmp(this->toFloat() / obj.toFloat());
    return (tmp);
}

Fixed &Fixed::operator++()
{
    ++this->raw_value; 
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed b;
    b.raw_value = this->raw_value++;
    return b;
}

Fixed &Fixed::operator--()
{
    --this->raw_value;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed b;
    b.raw_value = this->raw_value--;
    return b;
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
    if (obj1 < obj2)
        return (obj1);
    return obj2;
}

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
    if (obj1 < obj2)
        return (obj1);
    return obj2;
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
    if (obj1 > obj2)
        return (obj1);
    return obj2;
}

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
    if (obj1 > obj2)
        return (obj1);
    return obj2;
}

int Fixed::getRawBits(void) const
{
    return raw_value;
}

void Fixed::setRawBits( int const raw )
{
    raw_value = raw;
}

Fixed::~Fixed(void) {std::cout << *this << " destroyed" << std::endl;}
