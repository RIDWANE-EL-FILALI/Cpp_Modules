#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP


#define RESET         "\033[0m"
#define BLACK          "\033[30m"
#define RED            "\033[31m"
#define GREEN         "\033[32m"
#define YELLOW         "\033[33m"
#define BLUE           "\033[34m"
#define MAGENTA        "\033[35m"
#define CYAN           "\033[36m"
#define WHITE          "\033[37m"
#include <iostream>
#include <cstdint>

struct Data
{
	unsigned int	value;
	std::string		string;
};

class Serializer {
    private:
        Serializer();
        Serializer(const Serializer& src);
        Serializer &operator=(const Serializer &src);

    public:
        ~Serializer();
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);

}


#endif