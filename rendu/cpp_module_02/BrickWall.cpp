/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:27:56 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 19:36:30 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{
}

BrickWall::BrickWall(std::string type) : ATarget(type)
{
}

BrickWall::BrickWall(const BrickWall& ref) : ATarget(ref.getType())
{
}

BrickWall&
BrickWall::operator=(const BrickWall& ref)
{
	if (this != &ref)
		*this = ref;
	return (*this);
}

BrickWall::~BrickWall()
{
}

ATarget*
BrickWall::clone(void) const
{
	return (new BrickWall(*this));
}
