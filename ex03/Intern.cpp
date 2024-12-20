/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:39:25 by sdell-er          #+#    #+#             */
/*   Updated: 2024/12/20 19:53:07 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() { }

Intern::Intern(const Intern &copy) { *this = copy; }

Intern::~Intern() { }

Intern &Intern::operator=(const Intern &copy)
{
	if (this == &copy)
		return *this;
	return *this;
}

AForm *Intern::makeShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::makePresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string	forms[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon" };
	AForm *(Intern::*makers[])(std::string) = {
		&Intern::makeShrubberyCreationForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm };

	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == name)
		{
			std::cout << "Intern creates " << name << " with target " << target << std::endl;
			return (this->*makers[i])(target);
		}
	}
	std::cout << "Form " << name << " does not exist" << std::endl;
	return NULL;
}
