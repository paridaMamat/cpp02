
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


    bool    operator>(Fixed const &obj) const;
    bool    operator<(Fixed const &obj) const;
    bool    operator>=(Fixed const &obj) const;
    bool    operator<=(Fixed const &obj) const;
    bool    operator==(Fixed const &obj) const;
    bool    operator!=(Fixed const &obj) const;

    Fixed   operator+(Fixed const &obj) const;
    Fixed   operator-(Fixed const &obj) const;
    Fixed   operator*(Fixed const &obj) const;
    Fixed   operator/(Fixed const &obj) const;

    Fixed   operator++(int);
    Fixed   operator--(int);
    Fixed   &operator++();
    Fixed   &operator--();

    static Fixed min(Fixed &a, Fixed &b);
    static const Fixed min(Fixed const &a, Fixed const &b);
    static Fixed max(Fixed &a, Fixed &b);
    static const Fixed max(Fixed const &a, Fixed const &b);

};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);
#endif