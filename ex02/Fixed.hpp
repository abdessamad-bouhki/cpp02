#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int raw_value;
        static const int fractional_bits;
    public:
        Fixed(void);
        Fixed(const int num);
        Fixed(const float num);
        Fixed(const Fixed &fix);
        
        Fixed &operator= (const Fixed &fix);
        
        Fixed operator+(const Fixed& obj);
        Fixed &operator-(const Fixed& obj);
        Fixed operator*(const Fixed& obj);
        Fixed &operator/(const Fixed& obj);

        bool operator>(const Fixed& obj);
        bool operator>=(const Fixed& obj);
        bool operator<(const Fixed& obj);
        bool operator<=(const Fixed& obj);
        bool operator==(const Fixed& obj);
        bool operator!=(const Fixed& obj);

        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);


        int getRawBits(void) const;
        void setRawBits( int const raw );
        float toFloat( void ) const ;
        int toInt( void ) const ;

        ~Fixed(void);
        
};


std::ostream &operator<<(std::ostream &out, const Fixed &obj);
#endif
