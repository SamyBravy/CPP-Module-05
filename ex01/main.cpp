/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:34:16 by samuele           #+#    #+#             */
/*   Updated: 2024/12/16 23:23:43 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat bestione("Bestione", 10);
    Bureaucrat tartaruga("Tartaruga", 150);
    Form modulo1("Veganesimo obbligatorio", 10, 10);
    Form modulo2("Mangiare fagioli obbligatorio", 100, 150);

    try
    {
        Form modulo3("Veganesimo non obbligatorio", 0, 10);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << bestione << std::endl;
    std::cout << tartaruga << std::endl;
    std::cout << modulo1 << std::endl;
    std::cout << modulo2 << std::endl;

    bestione.signForm(modulo1);
    tartaruga.signForm(modulo2);
    
    std::cout << modulo1 << std::endl;
    std::cout << modulo2 << std::endl;

    return 0;
}
