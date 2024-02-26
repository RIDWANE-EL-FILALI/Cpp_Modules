#include "Span.hpp"

int main() {
    try {
        span check(10);

        // Adding numbers to the span
        for (int i = 1; i <= 10; ++i) {
            check.addNumber(i * 10);
        }

        // Test shortest span
        std::cout << "Shortest Span: " << check.shortestSpan() << std::endl;
        // Test longest span
        std::cout << "Longest Span: " << check.longestSpan() << std::endl;
        // Test copy constructor
        span test = check;
        std::cout << "Copy Constructor - Shortest Span: " << test.shortestSpan() << std::endl;

        // Test copy assignment operator
        span test2;
        test2 = check;
        std::cout << "Copy Assignment Operator - Longest Span: " << test2.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}