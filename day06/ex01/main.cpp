#include "Serializer.hpp"

int main() {
    Data data;
    data.string = "hello world";
    data.value = 12;

    uintptr_t p = Serializer::serialize(&data);
    std::cout << GREEN "The address of data : " << &data << std::endl;
    std::cout << "The value of p : " << p <<  RESET << std::endl;
    Data *b = Serializer::deserialize(p);
    std::cout << YELLOW "-----> checking for serialiation  and deserialization:" << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << b->string << std::endl;
    std::cout << b->value << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << GREEN "The value after : " << b << RESET << std::endl; 
    return (0);
}