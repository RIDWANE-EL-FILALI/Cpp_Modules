#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <sstream>
#include <ctime>
#include <deque>
#include <typeinfo>
# define MICROSECOND 100000
#define INSERTION_SORT_THRESHOLD 5


unsigned int ft_stou(const std::string& str);
void merge_insert_sort_vector(std::vector<unsigned int> &tmp, int ac);
void merge_insert_sort_deque(std::deque<unsigned int> &tmp, int ac);




#endif