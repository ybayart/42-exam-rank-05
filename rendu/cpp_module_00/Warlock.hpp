/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:02:29 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 18:10:58 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>

class	Warlock
{
	private:
		std::string		_name;
		std::string		_title;
		
		Warlock();
		Warlock(const Warlock&);
		Warlock& operator=(const Warlock&);
		
	public:
		Warlock(std::string, std::string);
		virtual ~Warlock();

		const std::string& getName() const;
		const std::string& getTitle() const;

		void	setTitle(const std::string&);

		void	introduce() const;
};

#endif
