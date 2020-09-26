/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:26:44 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 19:14:36 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

class	Dummy : public ATarget
{
	public:
		Dummy();
		Dummy(std::string);
		Dummy(const Dummy&);
		Dummy& operator=(const Dummy&);
		virtual ~Dummy();

		virtual ATarget*		clone() const;
};

#endif
