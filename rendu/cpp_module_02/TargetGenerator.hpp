/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 19:37:12 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 19:59:35 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <vector>

class ATarget;

class TargetGenerator
{
	private:
		TargetGenerator(const TargetGenerator&);
		TargetGenerator& operator=(const TargetGenerator&);
		std::vector<ATarget*>	_list;

	public:
		TargetGenerator();
		~TargetGenerator();

		void	learnTarget(ATarget*);
		void	forgetTarget(const std::string&);
		ATarget*	createTarget(const std::string&);
};

# include "ATarget.hpp"

#endif
