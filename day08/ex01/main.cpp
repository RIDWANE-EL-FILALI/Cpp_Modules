#include "Span.hpp"
#include <ctime>

int main() {
    try {
        std::cout << BOLD_WHITE_ON_BLACK "--> Testing with the test in the subject : " RESET<< std::endl;
        span sp = span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << MAGENTA "**********************" RESET << std::endl;
        std::cout << BOLD_WHITE_ON_BLACK "--> Testing with my tests : " RESET<< std::endl;
        std::srand(std::time(0));
        span test(100000);

        for (int i = 0; i < 100000; i++)
        {
            test.addNumber(std::rand() % 201 - 100);
        }
        std::cout << GREEN "The largest span is : " RESET << test.longestSpan()  << std::endl;
        std::cout << GREEN "The shortest span is : " RESET << test.shortestSpan()  << std::endl;
        std::cout << MAGENTA "**********************" RESET << std::endl;
        std::cout << BOLD_WHITE_ON_BLACK "--> Testing with fill_in method : " RESET<< std::endl;
        span test2(100);
        std::vector<int> check(4,100);
        test2.fill_in(check.begin(), check.end());
        std::cout << GREEN "The largest span is : " RESET << test2.longestSpan()  << std::endl;
        std::cout << GREEN "The shortest span is : " RESET << test2.shortestSpan()  << std::endl;
        // std::cout << BOLD_WHITE_ON_BLACK "--> Test that will fail : " RESET<< std::endl;
        // std::srand(std::time(0));
        // span test3(10);

        // for (int i = 0; i < 11; i++)
        // {
        //     test3.addNumber(std::rand() % 201 - 100);
        // }
        // std::cout << GREEN "The largest span is : " RESET << test3.longestSpan()  << std::endl;
        // std::cout << GREEN "The shortest span is : " RESET << test3.shortestSpan()  << std::endl;

    } catch (const std::exception& e) {
        std::cerr << RED "Exception: " << e.what() << RESET << std::endl;
    }

    return 0;
}