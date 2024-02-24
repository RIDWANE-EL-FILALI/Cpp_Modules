#include "Array.hpp"

typedef struct nun {
    int a;
}   nun;

int main() {
    // Example usage
    Array<int> intArray(5);
    Array<std::string> string_array(5);
    Array<nun> complex_array(5);

    std::cout << GREEN "filling out all the basic and complex arrays" RESET << std::endl;
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        intArray[i] = i * 2;
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;
    for(unsigned int i = 0; i < string_array.size();i++)
    {
        string_array[i] = "hello";
        std::cout << string_array[i] << " ";
    }
    std::cout << std::endl;
    for(unsigned int i = 0; i < complex_array.size(); i++)
    {
        complex_array[i].a = i;
        std::cout << complex_array[i].a << " ";
    }
    std::cout << std::endl;
    try {

        //accesing normal values
        std::cout << "Element at index 3 in the normal int array : " << intArray[3] << std::endl;
        std::cout << "Element at index 4 in the string array : " << string_array[4] << std::endl;
        std::cout << "Element at index 2 int the complex array : " << complex_array[2].a << std::endl;
        // if uncommented will fail
        //std::cout << "Accessing the element at index 5 in the normal int array : " << intArray[5] << std::endl;
        //std::cout << "Element at index -1 in the string array : " << string_array[-1] << std::endl;
        //std::cout << "Element at index 10 int the complex array : " << complex_array[10].a << std::endl;
    } catch (const std::exception& e) {
        std::cerr << RED "Exception: " << e.what() << RESET << std::endl;
    }
    return 0;
}
