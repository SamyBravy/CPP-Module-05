/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:34:16 by samuele           #+#    #+#             */
/*   Updated: 2024/12/16 22:56:22 by samuele          ###   ########.fr       */
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
