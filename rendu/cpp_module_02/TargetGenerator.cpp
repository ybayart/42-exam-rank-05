/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 19:40:29 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 19:59:28 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
	for (std::vector<ATarget*>::iterator it = _list.begin();it != _list.end();)
	{
		delete (*it);
		it = _list.erase(it);
	}
}

void
TargetGenerator::learnTarget(ATarget* spell)
{
	for (std::vector<ATarget*>::iterator it = _list.begin();it != _list.end();it++)
		if ((*(*it)).getType() == (*spell).getType())
			return ;
	_list.push_back(spell->clone());
}

void
TargetGenerator::forgetTarget(const std::string& name)
{
	for (std::vector<ATarget*>::iterator it = _list.begin();it != _list.end();)
	{
		if ((*(*it)).getType() == name)
		{
			delete (*it);
			it = _list.erase(it);
		}
		else
			it++;
	}
}

ATarget*
TargetGenerator::createTarget(const std::string& name)
{
	for (std::vector<ATarget*>::iterator it = _list.begin();it != _list.end();)
	{
		if ((*(*it)).getType() == name)
		{
			return ((*(*it)).clone());
		}
	}
	return (NULL);
}