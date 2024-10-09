#ifndef _MATERIASOURCE_HPP_
# define _MATERIASOURCE_HPP_

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		AMateria*	_inventory[4];
		bool		inLearnInventory(AMateria* m);
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& copy);
		~MateriaSource();
		MateriaSource&	operator=(const MateriaSource& other);
		void			learnMateria(AMateria* m);
		AMateria*		createMateria(const std::string& type);
};

#endif
