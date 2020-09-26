/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:26:44 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 19:36:08 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

class	BrickWall : public ATarget
{
	public:
		BrickWall();
		BrickWall(std::string);
		BrickWall(const BrickWall&);
		BrickWall& operator=(const BrickWall&);
		virtual ~BrickWall();

		virtual ATarget*		clone() const;
};

#endif
