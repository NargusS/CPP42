/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:53:00 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/15 15:27:23 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "./Form.hpp"
#include <fstream>

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &src);
		~PresidentialPardonForm();
		virtual void	execute(Bureaucrat const &executor)const;
	private:
		std::string _target;
};

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
	return;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {

	Form::operator=(src);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (!(this->getIsSign()))
		throw IsNotSigned();
	else if (this->getGradeForExec() < executor.getGrade())
		throw GradeTooLowForExec();
	else{
		std::cout << this->_target << " was forgiven by Zaphod Beeblebrox" << std::endl;
	}
}

#endif