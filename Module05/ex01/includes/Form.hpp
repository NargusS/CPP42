/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:28:45 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/15 13:41:36 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include "./Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string	_name;
		bool				_isSign;
		int					_gradeForSign;
		int					_gradeForExec;
	public:
		Form();
		Form&	operator=(const Form& src);
		Form(const Form &src);
		Form(std::string name, int gradeForSign, int gradeForExec);
		~Form();

		void	beSigned(Bureaucrat &emp);
		std::string	getName()const;
		int			getGradeForSign()const;
		int			getGradeForExec()const;
		bool		getIsSign()const;
		class	GradeTooHighException : public std::exception{
			public:
				const char*	what() const throw ();
		};
		class	GradeTooLowException : public std::exception{
			public:
				const char*	what() const throw ();
		};
};
std::ostream&	operator<<(std::ostream& os, const Form& Formulaire);

#endif