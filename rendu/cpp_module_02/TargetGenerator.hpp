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
