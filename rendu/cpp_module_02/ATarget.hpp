/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:12:58 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 18:45:11 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include <iostream>

class	ASpell;

class	ATarget
{
	private:
		std::string		_type;

	public:
		ATarget(std::string);
		ATarget();
		ATarget(const ATarget&);
		ATarget& operator=(const ATarget&);
		virtual ~ATarget();

		const std::string&	getType() const;

		virtual ATarget*		clone() const = 0;

		void		getHitBySpell(const ASpell&) const;
};

# include "ASpell.hpp"

#endif
