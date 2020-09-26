/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:27:56 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 19:35:30 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{
}

Polymorph::Polymorph(std::string name, std::string effects) : ASpell(name, effects)
{
}

Polymorph::Polymorph(const Polymorph& ref) : ASpell(ref)
{
}

Polymorph&
Polymorph::operator=(const Polymorph& ref)
{
	if (this != &ref)
		*this = ref;
	return (*this);
}

Polymorph::~Polymorph()
{
}

ASpell*
Polymorph::clone(void) const
{
	return (new Polymorph(*this));
}
