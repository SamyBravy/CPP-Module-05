/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:34:16 by samuele           #+#    #+#             */
/*   Updated: 2024/12/20 19:44:53 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat samuele("Samuele", 1);

    Intern intern;
    AForm *shrubbery = intern.makeForm("shrubbery creation", "home");
    AForm *robotomy = intern.makeForm("robotomy request", "robot");
    AForm *presidential = intern.makeForm("presidential pardon", "president");
    AForm *unknown = intern.makeForm("unknown", "unknown");

    std::cout << *shrubbery << std::endl;
    std::cout << *robotomy << std::endl;
    std::cout << *presidential << std::endl;
    if (unknown != NULL)
        std::cout << *unknown << std::endl;

    samuele.signForm(*shrubbery);
    samuele.signForm(*robotomy);
    samuele.signForm(*presidential);
    if (unknown)
        samuele.signForm(*unknown);

    samuele.executeForm(*shrubbery);
    samuele.executeForm(*robotomy);
    samuele.executeForm(*presidential);
    if (unknown)
        samuele.executeForm(*unknown);
    
    std::cout << *shrubbery << std::endl;
    std::cout << *robotomy << std::endl;
    std::cout << *presidential << std::endl;
    if (unknown)
        std::cout << *unknown << std::endl;
    
    delete shrubbery;
    delete robotomy;
    delete presidential;
    if (unknown)
        delete unknown;

    return 0;
}
