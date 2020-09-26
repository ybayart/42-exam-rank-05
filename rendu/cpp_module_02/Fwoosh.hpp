/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:26:44 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 19:17:26 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class	Fwoosh : public ASpell
{
	public:
		Fwoosh();
		Fwoosh(std::string, std::string);
		Fwoosh(const Fwoosh&);
		Fwoosh& operator=(const Fwoosh&);
		virtual ~Fwoosh();

		virtual ASpell*		clone() const;
};

#endif
