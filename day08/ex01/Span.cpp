#include "Span.hpp"

span::span(void) : maxsize(0), numbers()
{
    std::cout << "Default constructor called" << std::endl;
}
span::span(unsigned int N) : maxsize(N) {
    std::cout << "Default constructor with arguments called" << std::endl;
}
span::span(span const &src) : maxsize(src.maxsize), numbers(src.numbers) {
    std::cout << "Copy constructor called" << std::endl;
}
span::~span() {
    std::cout << "Default destructor called" << std::endl;
}
span &span::operator=(span const &src) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        this->maxsize = src.maxsize;
        this->numbers = src.numbers;
    }
    return (*this);
}

void span::addNumber(int number) {
    if (numbers.size() >= maxsize)
        throw std::out_of_range("cannot find the span asked for because it's out of range");
    numbers.push_back(number);
}

int span::shortestSpan() const {
    if (numbers.size() < 2)
        throw std::runtime_error("Cannot find span. Less than two numbers stored.");
    
    std::vector<int> sortedNumber = numbers;
    std::sort(sortedNumber.begin(), sortedNumber.end());

    int minspan = std::numeric_limits<int>::max();
    for(size_t i = 1;i < sortedNumber.size(); ++i)
    {
        int span = sortedNumber[i] - sortedNumber[i - 1];
        minspan = std::min(minspan, span);
    }
    return minspan;
}
int span::longestSpan() const {
    if (numbers.size() < 2)
        throw std::runtime_error("Cannot find span. Less than two numbers stored.");
    return (*std::max_element(numbers.begin(), numbers.end()) - *std::min_element(numbers.begin(), numbers.end()));
}