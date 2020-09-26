/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:27:56 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 19:16:35 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{
}

Dummy::Dummy(std::string type) : ATarget(type)
{
}

Dummy::Dummy(const Dummy& ref) : ATarget(ref.getType())
{
}

Dummy&
Dummy::operator=(const Dummy& ref)
{
	if (this != &ref)
		*this = ref;
	return (*this);
}

Dummy::~Dummy()
{
}

ATarget*
Dummy::clone(void) const
{
	return (new Dummy(*this));
}
