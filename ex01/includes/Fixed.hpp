
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private :

    int _value;
    static const int    _bits = 8;

    public :

    Fixed();
    ~Fixed();
    Fixed(int const value);
    Fixed(float const value);
    Fixed (const Fixed &obj);
    Fixed &operator = (const Fixed &obj);

    int     getRawBits() const;
    void    setRawBits(int const raw);
    float   toFloat() const;
    int		toInt(void) const;

};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);
#endif