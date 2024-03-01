#include "MutantStack.hpp"

int main()
{
    std::cout << BOLD_MAGENTA "-------------------------------------------------" << std::endl;
    std::cout << BOLD_WHITE_ON_BLACK "----> This is the test of the subject with the MutantStack class : " << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << GREEN "printing the top element : " RESET ; 
    std::cout << mstack.top() << std::endl;

    mstack.pop();
    std::cout << GREEN  "printing the size : " RESET;
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << BOLD_BLUE "The size of the stack coppied should be the same as the one above : " RESET << s.size() << std::endl;
    std::cout << BOLD_MAGENTA "-------------------------------------------------" << std::endl;
    std::cout << BOLD_WHITE_ON_BLACK "----> This is the test with the list : " << std::endl;
    std::list<int> test_list;
    test_list.push_back(5);
    test_list.push_back(17);
    std::cout << GREEN "printing the top element : " RESET ; 
    std::cout << test_list.back() << std::endl;

    test_list.pop_back();
    std::cout << GREEN  "printing the size : " RESET;
    std::cout << test_list.size() << std::endl;

    test_list.push_back(3);
    test_list.push_back(5);
    test_list.push_back(737);
    //[...]
    test_list.push_back(0);

    std::list<int>::iterator first = test_list.begin();
    std::list<int>::iterator back = test_list.end();

    ++first;
    --first;
    while (first != back)
    {
        std::cout << *first << std::endl;
        ++first;
    }
    std::cout << BOLD_MAGENTA "-------------------------------------------------" << std::endl;
    std::list<int> g(test_list);
    std::cout << BOLD_BLUE "The size of the stack coppied should be the same as the one above : " RESET << g.size() << std::endl;
    return 0;
}