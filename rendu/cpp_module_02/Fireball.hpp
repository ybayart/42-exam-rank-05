/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 19:33:49 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 19:34:12 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "ASpell.hpp"

class	Fireball : public ASpell
{
	public:
		Fireball();
		Fireball(std::string, std::string);
		Fireball(const Fireball&);
		Fireball& operator=(const Fireball&);
		virtual ~Fireball();

		virtual ASpell*		clone() const;
};

#endif
