/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:47:24 by sdell-er          #+#    #+#             */
/*   Updated: 2024/12/17 12:47:25 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Mangiafuoco("Mangiafuoco", 3);
    Bureaucrat Pinocchio("Pinocchio", 150);
    Bureaucrat Geppetto("Gepetto", 1);

    try
    {
        Bureaucrat FataTurchina("Fata Turchina", 0);
        Bureaucrat Lucignolo("Lucignolo", 151);

        std::cout << FataTurchina << std::endl;
        std::cout << Lucignolo << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << Mangiafuoco << std::endl;
    std::cout << Pinocchio << std::endl;
    std::cout << Geppetto << std::endl;
    
    try
    {
        Mangiafuoco.incrementGrade();
        Geppetto.decrementGrade();
        Pinocchio.decrementGrade();
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << Mangiafuoco << std::endl;
    std::cout << Pinocchio << std::endl;
    std::cout << Geppetto << std::endl;

    return 0;
}
