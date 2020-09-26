/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:12:58 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 18:43:44 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>

class ATarget;

class	ASpell
{
	private:
		std::string		_name;
		std::string		_effects;

	public:
		ASpell(std::string, std::string);
		ASpell();
		ASpell(const ASpell&);
		ASpell& operator=(const ASpell&);
		virtual ~ASpell();

		std::string getName() const;
		std::string getEffects() const;

		virtual ASpell*		clone() const = 0;

		void		launch(const ATarget&) const;
};

# include "ATarget.hpp"

#endif
