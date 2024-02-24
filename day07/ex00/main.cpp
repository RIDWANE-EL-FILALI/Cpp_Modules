#include "whatever.hpp"

int main( void ) {
    // subject main
    // int a = 2;
    // int b = 3;
    // ::swap( a, b );
    // std::cout << "a = " << a << ", b = " << b << std::endl;
    // std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    // std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    // std::string c = "chaine1";
    // std::string d = "chaine2";
    // ::swap(c, d);
    // std::cout << "c = " << c << ", d = " << d << std::endl;
    // std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    // std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    // more checks
    // int 
    std::cout << GREEN "Checking with normal integers " RESET << std::endl;
    int a = 10;
    int b = 20;
    std::cout << "a : " << a << "  b : " << b << std::endl;
    swap(a, b);
    std::cout << "a : " << a << "  b : " << b << std::endl;
    std::cout << "which one is bigger : " << max(a,b) << std::endl;
    std::cout << "which one is smaller : " << min(a,b) << std::endl;
    std::cout << GREEN "Checking with normal characters " RESET << std::endl; 
    char one = 'a';
    char two = 'z';
    std::cout << "one : " << one << "  two : " << two << std::endl;
    swap(one, two);
    std::cout << "one : " << one << "  two : " << two << std::endl;
    std::cout << "which one is bigger : " << max(one,two) << std::endl;
    std::cout << "which one is smaller : " << min(one,two) << std::endl;
    std::cout << GREEN "Checking with strings " RESET << std::endl; 
    std::string first = "hello";
    std::string second = "world";
    std::cout << "first : " << first << "  second : " << second << std::endl;
    swap(first, second);
    std::cout << "first : " << first << "  second : " << second << std::endl;
    std::cout << "which one is bigger : " << max(first,second) << std::endl;
    std::cout << "which one is smaller : " << min(first,second) << std::endl;
    std::cout << GREEN "Checking with float " RESET << std::endl; 
    float uno = 0.5;
    float dos = -10.5;
    std::cout << "uno : " << uno << "  dos : " << dos << std::endl;
    swap(uno, dos);
    std::cout << "uno : " << uno << "  dos : " << dos << std::endl;
    std::cout << "which one is bigger : " << max(uno,dos) << std::endl;
    std::cout << "which one is smaller : " << min(uno,dos) << std::endl;
    //check that will give compilation error
    // int t = 10;
    // char g = 97;
    // swap(t, g);
    return 0;
}