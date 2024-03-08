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
void log_me(std::vector<unsigned int> &tmp);
void log_me(std::deque<unsigned int> &tmp);
std::deque<unsigned int> mergeVecs(std::deque<unsigned int>& left, std::deque<unsigned int>& right);
std::vector<unsigned int> mergeVecs(std::vector<unsigned int>& left, std::vector<unsigned int>& right);
std::deque<unsigned int> insertionSortVec(std::deque<unsigned int>& vec);
std::vector<unsigned int> insertionSortVec(std::vector<unsigned int>& vec);
std::deque<unsigned int> mergeInsertVec(std::deque<unsigned int>& vec);
std::vector<unsigned int> mergeInsertVec(std::vector<unsigned int>& vec);



#endif