// #include <iostream>

// class Animal
// {
//     public:
//     std::string name;
//         Animal(){}
//         Animal ( Animal &obj)
//         {
//             this->name = obj.name;
//             std::cout << "copy constructer\n";
//         }
//         Animal &operator= (const Animal &animal)
//         {
//             if (&animal == this)
//                 return *this;
//             std::cout << "copy-assignment operator\n";
//             this->name = animal.name;
//             return *this;
//         }
// };

// int main()
// {
//     Animal a1;
//     a1.name = "hfddg";

//     Animal a2(a1);
//     std::cout << a2.name <<'\n';
//     Animal a3;
//     a1 = a1;

//     int a = 1;
//     int b = 2;
//     int c = 3;

//     c = b = a;
//     std::cout << c<<"\n";

// }

int main()
{
    int i = 0;
    int j = i++;
    
}


// #include "Fixed.hpp"
// #include <iostream>

// Fixed ft(int k)
// {
//     Fixed obj(k);
//     std::cout << &obj << std::endl;
//     return (obj);
    
// }

// int ift(int k)
// {
//     std::cout << "k: " << &k << std::endl;
//     return (k);   
// }

// int main( void )
// {
//     // Fixed a;
//     // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//     // std::cout << a << std::endl;
//     // std::cout << ++a << std::endl;
//     // std::cout << a << std::endl;
//     // std::cout << a++ << std::endl;
//     // std::cout << a << std::endl;
//     // std::cout << b << std::endl;
//     // std::cout << Fixed::max( a, b ) << std::endl;
//     // Fixed   a = 2;
//     int j = ift(6);
//     std::cout << "j: "<<&j << std::endl;
//     const Fixed &c = ft(3);
//     std::cout << &c << std::endl;

//     /*/fixed*/
//     // Fixed   b = a + c;
    
//     // std::cout << c  << std::endl;

// return 0;
// }