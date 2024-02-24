#include "Serializer.hpp"
#include <iostream>


Serializer::~Serializer() {
    std::cout << "Default destructor called" << std::endl;
}


Serializer::Serializer() {
    std::cout << "Default constructor called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer& src) {
    std::cout << "Copy assignment operator called" << std::endl;
    (void)src;
    return (*this);
}

Serializer::Serializer(const Serializer& src) {
    std::cout << "Default destructor with arguments called" << std::endl;
    *this = src;
}

uintptr_t Serializer::serialize(Data * ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}