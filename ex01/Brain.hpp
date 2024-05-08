#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain{

	private:
		std::string		ideas[100];
	
	public:
						Brain(void);
						Brain(const Brain &obj);
						~Brain(void);
		Brain&			operator=(const Brain &obj);
};
#endif