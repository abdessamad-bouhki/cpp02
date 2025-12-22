#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int raw_value;
        static const int fractional_bits;
    public:
        Fixed(void);
        Fixed(const Fixed &fix);
        Fixed &operator= (const Fixed &fix);
        int getRawBits(void) const;
        void setRawBits( int const raw );
        ~Fixed(void);

};

#endif
