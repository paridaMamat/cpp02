#include"../includes/Fixed.hpp"

 Fixed::Fixed():_value(0){
 }

Fixed::Fixed(int const value):_value(value << _bits){
}

Fixed::Fixed(float const value){
   _value = roundf(value * (1 << _bits));
}

 Fixed::Fixed(const Fixed &obj){
    *this = obj;
 }

Fixed::~Fixed(){
}

Fixed &Fixed::operator=(const Fixed &obj){
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

bool  Fixed::operator>(Fixed const &obj) const{
   return (this->getRawBits() > obj.getRawBits());
}

bool  Fixed::operator<(Fixed const &obj) const{
   return (this->getRawBits() < obj.getRawBits());
}

bool  Fixed::operator>=(Fixed const &obj) const{
   return (this->getRawBits() >= obj.getRawBits());
}

bool  Fixed::operator<=(Fixed const &obj) const{
   return (this->getRawBits() <= obj.getRawBits());
}

bool  Fixed::operator==(Fixed const &obj) const{
   return (this->getRawBits() == obj.getRawBits());
}

bool  Fixed::operator!=(Fixed const &obj) const{
   return (this->getRawBits() != obj.getRawBits());
}

Fixed Fixed::operator+(Fixed const &obj) const{
   return (this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(Fixed const &obj) const{
   return (this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(Fixed const &obj) const{
   return (this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(Fixed const &obj) const{
   return (this->toFloat() / obj.toFloat());
}

Fixed Fixed::operator++(int){
   Fixed a(*this);
   operator++();
   return a;
}

Fixed Fixed::operator--(int){
   Fixed a(*this);
   operator--();
   return a;  
}

Fixed &Fixed::operator++(){
   ++this->_value;
   return *this;
}

Fixed &Fixed::operator--(){
   --this->_value;
   return *this;
}

Fixed Fixed::max(Fixed &a, Fixed &b){
   return (a > b) ? a : b;
}

const Fixed Fixed::max(Fixed const &a, Fixed const &b){
   return (a > b) ? a : b;
}

Fixed Fixed::min(Fixed &a, Fixed &b){
   return (a < b) ? a : b;
}

const Fixed Fixed::min(const Fixed &a, const Fixed &b){
   return (a < b) ? a : b;
}

std::ostream &operator<<(std::ostream &a, const Fixed &b){
   a << b.toFloat();
   return a;
}

