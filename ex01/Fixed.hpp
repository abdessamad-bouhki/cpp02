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
        int getRawBits(void) const;
        void setRawBits( int const raw );
        int get_fractional_bits();
        ~Fixed(void);

};

#endif
