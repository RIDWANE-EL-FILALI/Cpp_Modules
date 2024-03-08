#include "RPN.hpp"

int isNumber(const std::string& s) {
    if (s.empty())
        return (3);
    else if (s == "+" || s == "-" || s == "/" || s == "*")
        return (2);
    else if (s.find_first_not_of("0123456789") != std::string::npos)
        return (1);
    else
        return (0);
}

// Function to perform the RPN calculation
int calculateRPN(const std::string& expression) {
    std::stack<int> numbers;

    std::stringstream ss(expression);
    std::string token;

    while (ss >> token) {
        int check = 5;
        check = isNumber(token);
        if (check == 0) {
            // If the token is a number, push it onto the stack
            if (stoi(token) >= 10 || stoi(token) < 0)
                throw std::invalid_argument("the number should be from 0 to 9.");
            numbers.push(stoi(token));
        } else if (check == 2){
            // If the token is an operator, perform the operation
            if (numbers.size() < 2) {
                throw std::logic_error("Insufficient operands for operator " + token + " or there is more than two elements in the stack");
            }
            int operand2 = numbers.top();
            numbers.pop();
            int operand1 = numbers.top();
            numbers.pop();

            if (token == "+") {
                numbers.push(operand1 + operand2);
            } else if (token == "-") {
                numbers.push(operand1 - operand2);
            } else if (token == "*") {
                numbers.push(operand1 * operand2);
            } else if (token == "/") {
                if (operand2 == 0) {
                    //std::cerr << "Error: Division by zero" << std::endl;
                    throw std::logic_error("Divided by zero.");
                }
                numbers.push(operand1 / operand2);
            } 
        } else
            throw std::logic_error("Invalid input check it " + token);
    }
    // The final result should be on the top of the stack
    if (numbers.size() != 1)
        throw std::logic_error("Invalid expression");
    return numbers.top();
}