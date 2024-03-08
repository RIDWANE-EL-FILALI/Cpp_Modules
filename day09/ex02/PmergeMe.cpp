#include "PmergeMe.hpp"

unsigned int ft_stou(const std::string& str)
{
	unsigned int num;
	std::stringstream ss(str);

	ss >> num;
	return num;
}

template <typename T>
void log_me(T &tmp)
{
    for (typename T::iterator i = tmp.begin(); i != tmp.end(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;
}

template <typename T>
T mergeVecs(T& left, T& right)
{
    T result;

    // Merge the two vectors until one of them becomes empty
    while (!left.empty() && !right.empty())
	{
        if (left.front() <= right.front()) 
		{
            result.push_back(left.front());
            left.erase(left.begin());
        }
		else
		{
            result.push_back(right.front());
            right.erase(right.begin());
        }
    }
    // Add any remaining elements from the left vector
    while (!left.empty())
	{
        result.push_back(left.front());
        left.erase(left.begin());
    }
    // Add any remaining elements from the right vector
    while (!right.empty())
	{
        result.push_back(right.front());
        right.erase(right.begin());
    }
    return result;
}

template <typename T>
static T insertionSortVec(T& vec) {
    for (unsigned int i = 1; i < vec.size(); i++) {
        unsigned int key = vec[i];
        int j = i - 1;

        // Move elements of vec[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j--;
        }

        vec[j + 1] = key;
    }
    return vec;
}

template <typename T>
T mergeInsertVec(T& vec) {
    // Base case: a vector with zero or one elements is already sorted
    if (vec.size() <= 1) {
        return vec;
    }

    // If the size of the vector is below the threshold, use insertion sort
    if (vec.size() <= INSERTION_SORT_THRESHOLD) {
        return insertionSortVec(vec);
    }
    // Divide the vector into two halves
    int mid = vec.size() / 2;
    T left(vec.begin(), vec.begin() + mid);
    T right(vec.begin() + mid, vec.end());

    // Recursively sort the left and right halves
    left = mergeInsertVec(left);
    right = mergeInsertVec(right);

    // Merge the sorted halves
    return mergeVecs(left, right);
}

void merge_insert_sort_vector(std::vector<unsigned int> &tmp, int ac)
{
    std::vector<unsigned int> ret;
    std::cout << "Befor : ";
    log_me(tmp);
    std::clock_t start = std::clock();
    ret = mergeInsertVec(tmp);
    double time_taken = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * MICROSECOND;
    std::cout << "After : ";
	log_me(ret);
    std::cout << "Time to process a range of " << ac - 1
        << " elements " << "with std::vector <unsigned int> : " 
        << time_taken << " µs" << std::endl;
}

void merge_insert_sort_deque(std::deque<unsigned int> &tmp, int ac)
{
    std::deque<unsigned int> ret;
    std::clock_t start = std::clock();
    ret = mergeInsertVec(tmp);
    double time_taken = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * MICROSECOND;
    std::cout << "Time to process a range of " << ac - 1
        << " elements " << "with std::deque <unsigned int> : " 
        << time_taken << " µs" << std::endl;
}