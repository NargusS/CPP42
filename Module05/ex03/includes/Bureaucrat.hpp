/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:48:16 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/15 15:11:40 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{

	private:
		std::string const	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat&	operator=(const Bureaucrat &src);
		~Bureaucrat();
		std::string	getName()const;
		int			getGrade()const;
		void		getRetrograded();
		void		getPromoted();
		void		signForm(Form &f);
		void		executeForm(Form const & form);
		class GradeTooHighException : public std::exception{
			public:
				const char*	what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				const char*	what() const throw();
		};
};
std::ostream&	operator<<(std::ostream& os, const Bureaucrat& Employe);
#endif