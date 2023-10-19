#include"../includes/Fixed.hpp"

 Fixed::Fixed():_value(0){
    std::cout << "Default constructor called" << std::endl;
 }

Fixed::Fixed(int const value):_value(value){
   std::cout << "Surcharger constructor called" << std::endl;
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
   std::cout << "getRawBits member function called" << std::endl;
   return (this->_value);
}

void  Fixed::setRawBits(int const raw){
   this->_value = raw;
}