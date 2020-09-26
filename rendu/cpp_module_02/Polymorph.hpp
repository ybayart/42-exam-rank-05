/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:26:44 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 19:35:07 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class	Polymorph : public ASpell
{
	public:
		Polymorph();
		Polymorph(std::string, std::string);
		Polymorph(const Polymorph&);
		Polymorph& operator=(const Polymorph&);
		virtual ~Polymorph();

		virtual ASpell*		clone() const;
};

#endif
