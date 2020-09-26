/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 19:37:12 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 19:51:37 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <vector>

class ASpell;

class SpellBook
{
	private:
		SpellBook(const SpellBook&);
		SpellBook& operator=(const SpellBook&);
		std::vector<ASpell*>	_list;
	
	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell*);
		void	forgetSpell(const std::string&);
		ASpell*	createSpell(const std::string&);
};

# include "ASpell.hpp"

#endif
