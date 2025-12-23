#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed(const int num)
{
    setRawBits(num * (1 << fractional_bits));
}

Fixed::Fixed(const float num)
{
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

bool Fixed::operator>(const Fixed& obj)
{
    return (raw_value > obj.raw_value);
}

bool Fixed::operator>=(const Fixed& obj)
{
    return (raw_value >= obj.raw_value);
}

bool Fixed::operator<(const Fixed& obj)
{
    return (raw_value < obj.raw_value);
}

bool Fixed::operator<=(const Fixed& obj)
{
    return (raw_value <= obj.raw_value);
}

bool Fixed::operator==(const Fixed& obj)
{
    return (raw_value == obj.raw_value);
}

bool Fixed::operator!=(const Fixed& obj)
{
    return (raw_value != obj.raw_value);
}

Fixed Fixed::operator+(const Fixed& obj)
{
    Fixed tmp;
    tmp.raw_value = raw_value + obj.raw_value;
    return (tmp);
}

Fixed &Fixed::operator-(const Fixed& obj)
{
    raw_value -= obj.raw_value;
    return (*this);
}

Fixed Fixed::operator*(const Fixed& obj)
{
    Fixed tmp;
    tmp.raw_value = raw_value * obj.raw_value;
    std::cout << tmp.raw_value << "\n";
    return (tmp);
}

Fixed &Fixed::operator/(const Fixed& obj)
{
    raw_value /= obj.raw_value;
    return (*this);
}

Fixed &Fixed::operator++()
{
    ++raw_value; 
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed b;
    b.raw_value = raw_value++;
    return b;
}

Fixed &Fixed::operator--()
{
    --raw_value;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed b;
    b.raw_value = raw_value--;
    return b;
}

int Fixed::getRawBits(void) const
{
    return raw_value;
}

void Fixed::setRawBits( int const raw )
{
    raw_value = raw;
}

Fixed::~Fixed(void) {}
