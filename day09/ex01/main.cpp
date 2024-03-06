#include "RPN.hpp"

int main(int argc, char* argv[]) {
    // Check if an argument is provided
    if (argc != 2) {
        std::cerr << GREEN "Usage: " << argv[0] << " <inverted_polish_expression>" RESET<< std::endl;
        return EXIT_FAILURE;
    }

    // Process the expression and output the result or an error message
    try {
        int result = calculateRPN(argv[1]);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << RED "Error: " << e.what() << RESET << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}