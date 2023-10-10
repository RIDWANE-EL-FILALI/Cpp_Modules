/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:12:48 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 18:12:49 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    public:
        Brain(void);
        Brain(Brain const &src);
        ~Brain(void);
        Brain &operator=(Brain const &src);
        std::string const &getIdea(int index) const;
        void setIdea(int index, std::string const &idea);
        static int const nb_ideas = 100;
    private:
        std::string ideas[nb_ideas];
};


#endif