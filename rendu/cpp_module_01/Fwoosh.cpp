/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:27:56 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 19:17:13 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::Fwoosh(std::string name, std::string effects) : ASpell(name, effects)
{
}

Fwoosh::Fwoosh(const Fwoosh& ref) : ASpell(ref)
{
}

Fwoosh&
Fwoosh::operator=(const Fwoosh& ref)
{
	if (this != &ref)
		*this = ref;
	return (*this);
}

Fwoosh::~Fwoosh()
{
}

ASpell*
Fwoosh::clone(void) const
{
	return (new Fwoosh(*this));
}
