#include"../includes/Fixed.hpp"

 Fixed::Fixed():_value(0){
    std::cout << "Default constructor called" << std::endl;
 }

Fixed::Fixed(int const value):_value(value << _bits){
   std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value){
   std::cout << "Float constructor called" << std::endl;
   _value = static_cast<int>(value * (1 << _bits));
}

 Fixed::Fixed(const Fixed &obj){
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
 }

Fixed::~Fixed(){
   std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj){
   std::cout << "Copy assignment operator called" << std::endl;
   this->_value = obj.getRawBits();
   return (*this);
}

int   Fixed::getRawBits() const{
   return (this->_value);
}

void  Fixed::setRawBits(int const raw){
   this->_value = raw;
}

float Fixed::toFloat() const {
   return (static_cast<float>(this->getRawBits()) / (1 << _bits));
}

int Fixed::toInt() const{
	return (static_cast<int>(this->getRawBits()) >> _bits);
}

std::ostream &operator<<(std::ostream &o, const Fixed &rhs){
   o << rhs.toFloat();
   return o;
}