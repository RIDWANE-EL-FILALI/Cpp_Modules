#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


// Foreground (text) colors
#define RESET         "\033[0m"
#define BLACK          "\033[30m"
#define RED            "\033[31m"
#define GREEN         "\033[32m"
#define YELLOW         "\033[33m"
#define BLUE           "\033[34m"
#define MAGENTA        "\033[35m"
#define CYAN           "\033[36m"
#define WHITE          "\033[37m"
// Background colors (add 10 to the foreground color code)
#define B_BLACK   "\033[40m"
#define B_RED     "\033[41m"
#define B_GREEN   "\033[42m"
#define B_YELLOW  "\033[43m"
#define B_BLUE    "\033[44m"
#define B_MAGENTA "\033[45m"
#define B_CYAN    "\033[46m"
#define B_WHITE   "\033[47m"

// Foreground (text) colors
#define BOLD_BLACK   "\033[1;30m"
#define BOLD_RED     "\033[1;31m"
#define BOLD_GREEN   "\033[1;32m"
#define BOLD_YELLOW  "\033[1;33m"
#define BOLD_BLUE    "\033[1;34m"
#define BOLD_MAGENTA "\033[1;35m"
#define BOLD_CYAN    "\033[1;36m"
#define BOLD_WHITE   "\033[1;37m"

// Background colors (add 10 to the foreground color code)
#define BOLD_B_BLACK   "\033[1;40m"
#define BOLD_B_RED     "\033[1;41m"
#define BOLD_B_GREEN   "\033[1;42m"
#define BOLD_B_YELLOW  "\033[1;43m"
#define BOLD_B_BLUE    "\033[1;44m"
#define BOLD_B_MAGENTA "\033[1;45m"
#define BOLD_B_CYAN    "\033[1;46m"
#define BOLD_B_WHITE   "\033[1;47m"
// Bold combination colors
#define BOLD_RED_ON_BLUE        "\033[1;31;44m"
#define BOLD_GREEN_ON_YELLOW    "\033[1;32;43m"
#define BOLD_WHITE_ON_MAGENTA   "\033[1;37;45m"
#define BOLD_CYAN_ON_BLACK      "\033[1;36;40m"
#define BOLD_YELLOW_ON_GREEN    "\033[1;33;42m"
#define BOLD_MAGENTA_ON_CYAN    "\033[1;35;46m"
#define BOLD_BLUE_ON_WHITE      "\033[1;34;47m"
#define BOLD_BLACK_ON_RED       "\033[1;30;41m"
#define BOLD_RED_ON_YELLOW      "\033[1;31;43m"
#define BOLD_GREEN_ON_MAGENTA   "\033[1;32;45m"
#define BOLD_CYAN_ON_BLUE       "\033[1;36;44m"
#define BOLD_WHITE_ON_BLACK     "\033[1;37;40m"
#include <iostream>
#include <algorithm>
#include <stack>
#include <list>



template< typename T, class container = std::deque< T > >
class MutantStack : public std::stack<T, container>
{
    private:

    public:
        MutantStack() { std::cout << "Default constructor called " << std::endl; }
        MutantStack(const MutantStack &src) { 
            *this = src;
            std::cout << "Default constructor with arguments called " << std::endl; 
        }
        MutantStack &operator=(const MutantStack &src) { 
            std::cout << "copy assignment operator called " << std::endl; 
            std::stack<T, container>::operator=(src);
            return *this;
        }
        ~MutantStack() { std::cout << "Default destructor called " << std::endl; }

        typedef typename container::iterator iterator;

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
};




#endif