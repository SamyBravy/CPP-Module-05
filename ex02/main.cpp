/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:34:16 by samuele           #+#    #+#             */
/*   Updated: 2024/12/20 19:43:11 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat barbapapa("BarbaPapa", 1);
    Bureaucrat barbamamma("BarbaMamma", 2);
    Bureaucrat barbabarba("BarbaBarba", 130);
    Bureaucrat barbazoo("BarbaZoo", 130);

    ShrubberyCreationForm christmas("home");
    ShrubberyCreationForm garden("garden");
    RobotomyRequestForm robotomy("robotomy");
    PresidentialPardonForm pardon("pardon");

    std::cout << barbapapa << std::endl;
    std::cout << barbamamma << std::endl;
    std::cout << barbabarba << std::endl;
    std::cout << barbazoo << std::endl;
    
    std::cout << christmas << std::endl;
    std::cout << robotomy << std::endl;
    std::cout << pardon << std::endl;
    std::cout << garden << std::endl;

    barbabarba.executeForm(christmas);

    barbapapa.signForm(christmas);
    barbapapa.signForm(robotomy);
    barbapapa.signForm(pardon);
    barbabarba.signForm(garden);
    
    barbapapa.executeForm(christmas);
    barbapapa.executeForm(robotomy);
    barbamamma.executeForm(robotomy);
    barbazoo.executeForm(pardon);
    barbapapa.executeForm(pardon);
    barbamamma.executeForm(garden);

    std::cout << christmas << std::endl;
    std::cout << robotomy << std::endl;
    std::cout << pardon << std::endl;
    std::cout << garden << std::endl;

    return 0;
}

