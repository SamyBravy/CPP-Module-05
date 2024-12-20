/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:07:32 by sdell-er          #+#    #+#             */
/*   Updated: 2024/12/20 17:42:45 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) { }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), _target(copy._target) { }

ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this == &copy)
		return *this;
	AForm::operator=(copy);
	_target = copy._target;
	return *this;
}

void ShrubberyCreationForm::execution() const
{
	std::ofstream file((_target + "_shrubbery").c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: could not open file");
	
	file << createTrees();
}

std::string ShrubberyCreationForm::createTrees() const
{
    return "             /\\\n"
            "            <  >\n"
            "             \\/\n"
            "             /\\\n"
            "            /  \\\n"
            "           /++++\\\n"
            "          /  ()  \\\n"
            "          /      \\\n"
            "         /~`~`~`~`\\\n"
            "        /  ()  ()  \\\n"
            "        /          \\\n"
            "       /*&*&*&*&*&*&\\\n"
            "      /  ()  ()  ()  \\\n"
            "      /              \\\n"
            "     /++++++++++++++++\\\n"
            "    /  ()  ()  ()  ()  \\\n"
            "    /                  \\\n"
            "   /~`~`~`~`~`~`~`~`~`~`\\\n"
            "  /  ()  ()  ()  ()  ()  \\\n"
            "  /*&*&*&*&*&*&*&*&*&*&*&\\\n"
            " /                        \\\n"
            "/,.,.,.,.,.,.,.,.,.,.,.,.,.\\\n"
            "           |   |\n"
            "          |`````|\n"
            "          \\_____/\n"
            "\n"
            "          .     .  .      +     .      .          .\n"
            "     .       .      .     #       .           .\n"
            "        .      .         ###            .      .      .\n"
            "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
            "          .      . \"####\"###\"####\"  .\n"
            "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
            "  .             \"#########\"#########\"        .        .\n"
            "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
            "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
            "                .\",##\"#####\"#####\"##\"           .      .\n"
            "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
            "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
            "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
            "            .     \"      000      \"    .     .\n"
            "       .         .   .   000     .        .       .\n"
            ".. .. ..................O000O........................ ......";
}