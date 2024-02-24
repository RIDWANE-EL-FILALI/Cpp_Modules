#include "iter.hpp"
#include <time.h>

int main() {
    std::cout << GREEN "Testing with an array of integers" RESET << std::endl;
    int array[10] = {};
    std::srand(time(NULL));
    for (int i = 0; i < 10;i++)
    {
        array[i] = rand() % 41 - 20;
    }
    print_array(array, 10);
    iter(array, 10, increment<int>);
    print_array(array, 10);
    return (0);
}