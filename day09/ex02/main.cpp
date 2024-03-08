#include "PmergeMe.hpp"


int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cerr << "Usage : <program_name> [numbers........]" << std::endl;
        return (1);
    }
    try {
        std::deque<unsigned int> tmp2;
        std::vector<unsigned int> tmp;
        for(int i = 1;i < ac;i++)
        {
            if (std::string(av[i]).find_first_not_of("0123456789 ") != std::string::npos)
                throw std::invalid_argument("non positive integer found !");
            else
            {
                tmp.push_back(ft_stou(av[i]));
                tmp2.push_back(ft_stou(av[i]));
            }
        }
        std::vector<unsigned int>::iterator it;
        std::vector<unsigned int>::iterator it2;

        for (it = tmp.begin(); it != tmp.end();it++)
        {
            for (it2 = it + 1; it2 != tmp.end(); it2++)
            {
                if (*it == *it2)
                    throw std::invalid_argument("repeated number !");
            }
        }
        merge_insert_sort_vector(tmp, ac);
        merge_insert_sort_deque(tmp2, ac);

    } catch (std::exception &e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
    return (0);
}