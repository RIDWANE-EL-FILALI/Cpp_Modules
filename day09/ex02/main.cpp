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
            if (std::string(av[i]).find_first_not_of("0123456789") != std::string::npos)
                throw std::invalid_argument("non positive integer found or multy number in one argument !");
            else
            {
                tmp.push_back(ft_stou(av[i]));
                tmp2.push_back(ft_stou(av[i]));
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