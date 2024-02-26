#include "easyfind.hpp"

int main() 
{
    try {
        std::cout << BOLD_GREEN_ON_YELLOW "Examples with Sequence Containers : Vectors && lists " RESET << std::endl;
        std::cout << BOLD_GREEN "-----> START :: Vectors examples :" RESET << std::endl;
        std::vector<int> vec;
        std::cout << GREEN "let's see the size and capacity of this vectos before extending  :" RESET << std::endl;
        std::cout << "size : " << vec.size() << std::endl;
        std::cout << "capacity : " << vec.capacity() << std::endl;
        for (int i = 0; i < 15 ; i++)
            vec.push_back(i * 2);
        int searchValue = 4;

        std::cout << GREEN "let's see the size and capacity of this vectos after extending  :" RESET << std::endl;
        std::cout << "size : " << vec.size() << std::endl;
        std::cout << "capacity : " << vec.capacity() << std::endl;

        std::cout << GREEN "Printing the addresses for every part in the vector : " RESET << std::endl;
        for (unsigned int i = 0; i < vec.size(); i++)
            std::cout  << "The address of " << i << " :     " YELLOW << &vec[i] << RESET "   with The value of : " << vec[i] << std::endl;

        std::vector<int>::iterator result = easyfind(vec, searchValue);
        std::cout << "the Value returned from the funtion : " BLUE << &(*result) << RESET " wich has the value of : " << *result << std::endl;
        std::cout << BOLD_GREEN "-----> START :: List examples :" RESET << std::endl;
        std::list<int> first_list;
        std::cout << GREEN "let's see the size of this list before extending  :" RESET << std::endl;
        std::cout << "Size : " << first_list.size() << std::endl;
        for (int i = 0; i < 10; i++)
            first_list.push_back(i * 4);
        std::cout << "Size : " << first_list.size() << std::endl;
        std::cout << GREEN "Printing the addresses for every node in of the list : " RESET << std::endl;
        std::list<int>::iterator firstIterator = first_list.begin();
        for (unsigned int i = 0; i < first_list.size(); i++, firstIterator++)
            std::cout  << "The address of " << i << " :     " YELLOW << &(*firstIterator) << RESET "   with The value of : " << *firstIterator << std::endl;
        std::list<int>::iterator result2 = easyfind(first_list, searchValue);
        std::cout << "the Value returned from the funtion : " BLUE << &(*result2) << RESET " wich has the value of : " << *result2 << std::endl;
        std::cout <<BOLD_WHITE_ON_BLACK "Now let's try a value that doesn't exist : " RESET << std::endl;
        std::list<int>::iterator result3 = easyfind(first_list, 100);
        std::cout << "the Value returned from the funtion : " BLUE << &(*result3) << RESET " wich has the value of : " << *result3 << std::endl;
    } catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}