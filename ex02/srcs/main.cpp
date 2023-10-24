#include "../includes/Fixed.hpp"
 void        make_tests(int value_of_b, float value_of_c) 
 { 
         std::cout << "INITIALISATION"  << std::endl << std::endl; 
         std::cout <<  "Initialising a Fixed variable a."  << std::endl; 
         Fixed a; 
         std::cout << "Value of a is: " << a << std::endl; 

         std::cout <<  "Initialising a Fixed variable b with an int (" << value_of_b 
                 << ")."   << std::endl; 
         const Fixed b(value_of_b); 
         std::cout << "Value of b is: "<< b << std::endl; 

         std::cout <<  "Initialising a Fixed variable c with a float (" << value_of_c 
                 << ")"  << std::endl; 
         const Fixed c(value_of_c); 
         std::cout << "Value of c is: " << c << std::endl; 

         std::cout <<  "Initialising a Fixed variable d with another Fixed variable (c)."  << std::endl; 
         Fixed d(c); 
         std::cout << "Value of d is: " << d << std::endl; 

         std::cout <<  "Using assignation operator (a = b)"  << std::endl; 
         a = b; 
         std::cout << "Value of a is: "  << a << std::endl << std::endl; 


         std::cout << "Using comparison operators" << std::endl; 
         std::cout << "a < c is " << (a < c) << std::endl; 
         std::cout << "a < b is " << (a < b) << std::endl; 
         std::cout << "a > c is " << (a > c) << std::endl; 
         std::cout << "a > b is " << (a > b) << std::endl; 
         std::cout << "a <= c is " << (a <= c) << std::endl; 
         std::cout << "a <= b is " << (a <= b) << std::endl; 
         std::cout << "a >= c is " << (a >= c) << std::endl; 
         std::cout << "a >= b is " << (a >= b) << std::endl; 
         std::cout << "a == c is " << (a == c) << std::endl; 
         std::cout << "a == b is " << (a == b) << std::endl; 
         std::cout << "a != c is " << (a != c) << std::endl; 
         std::cout << "a != b is " << (a != b) << std::endl << std::endl; 

         std::cout << "Using binary operators" << std::endl; 
         std::cout << "c + a = " << (c + a) << std::endl; 
         std::cout << "c - a = " << (c - a) << std::endl; 
         std::cout << "c * a = " << (c * a) << std::endl; 
         std::cout << "c / a = " << (c / a) << std::endl << std::endl;
         std::cout <<  "Using unary operators" << std::endl; 
         std::cout << "a++ = " << a++ << std::endl; 
         std::cout << "Value of a is: " << a << std::endl; 
         std::cout << "++a = " << ++a << std::endl; 
         std::cout << "Value of a is: " << a << std::endl; 
         std::cout << "a-- = " << a-- << std::endl; 
         std::cout << "Value of a is: " << a << std::endl; 
         std::cout << "--a = " << --a << std::endl; 
         std::cout << "Value of a is: " << a << std::endl << std::endl;
 }

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    make_tests(45, 42.5678548);
    return 0;
}

 

