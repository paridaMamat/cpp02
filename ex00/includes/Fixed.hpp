
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private :

    int _value;
    static const int    _bits = 8;

    public :

    Fixed();
    ~Fixed();
    Fixed (const Fixed &obj);
    Fixed &operator = (const Fixed &obj);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};
#endif