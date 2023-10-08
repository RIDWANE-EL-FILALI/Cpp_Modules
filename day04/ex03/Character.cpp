#include "Character.hpp"
#include <iostream>
#include <string>

Character::Character(void) : _name("Unnamed")
{
	std::cout << "Character default constructor called." << std::endl;
	this->_initializeEmptyInventory();
	return ;
}

Character::Character(Character const & src)
{
	std::cout << "Character copy constructor called." << std::endl;
	this->_initializeEmptyInventory();
	*this = src;
	return ;
}

Character::Character(std::string const & name) : _name(name)
{
	std::cout << "Character name constructor called with name \""
		<< this->_name << "\"." << std::endl;
	this->_initializeEmptyInventory();
	return ;
}

Character::~Character(void)
{
	std::cout << "Character destructor called for \""
		<< this->_name << "\"." << std::endl;
	this->_deleteInventory();
	return ;
}

Character &	Character::operator=(Character const & src)
{
	std::cout << "Character assignment operator overload called." << std::endl;
	this->_name = src._name;
	this->_deleteInventory();
	for (int i = 0; i < this->_inventorySize; i++)
	{
		if (src._inventory[i] != NULL)
			this->_inventory[i] = src._inventory[i]->clone();
	}
	return (*this);
}

std::string const &	Character::getName(void) const
{
	return (this->_name);
}

void	Character::setName(std::string const & newName)
{
	this->_name = newName;
	return ;
}

void	Character::equip(AMateria * materia)
{
	if (!materia)
	{
		std::cout << this->_name
			<< ": Can't equip something that doesn't exist!" << std::endl;
		return ;
	}
	for (int i = 0; i < this->_inventorySize; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = materia;
			std::cout  << this->_name
				<< " equipped " << materia->getType()
				<< " materia to inventory index " << i << "."  << std::endl;
			return ;
		}
	}
	std::cout  << this->_name
		<< ": I can't carry any more materia!" << std::endl;
	return ;
}

void	Character::unequip(int index)
{
	if (index < 0 || index >= this->_inventorySize)
	{
		std::cout  << this->_name
			<< ": I can't unequip anything from inventory index " << index
			<< ". It's not a valid index!" << std::endl;
		return ;
	}
	if (this->_inventory[index] == NULL)
	{
		std::cout << this->_name
			<< ": I don't have anything at index " << index << " to unequip!"
			 << std::endl;
		return ;
	}
	std::cout  << this->_name
		<< " unequipped " << this->_inventory[index]->getType()
		<< " materia from inventory index " << index << "." << std::endl;
	this->_inventory[index] = NULL;	
	return ;
}

void	Character::use(int index, ICharacter & target)
{
	if (index < 0 || index >= this->_inventorySize)
	{
		std::cout << this->_name << ": "
			"Can't use item at inventory index " << index
			<< ". It's not a valid index!" << std::endl; 
		return ;
	}
	if (this->_inventory[index] != NULL)
	{
		std::cout << this->_name << ": ";
		this->_inventory[index]->use(target);
	}
	else
		std::cout << this->_name
			<< ": "  "Oops, I don't have an item in my inventory at index "
			<< index << "!"  << std::endl;
	return ;
}

void	Character::displayInventory(void) const
{
	std::cout << this->_name << "'s inventory contains:" << std::endl;
	for (int i = 0; i < this->_inventorySize; i++)
	{
		std::cout << "\t[" << i << "] ";
		if (this->_inventory[i] == NULL)
			std::cout << "Empty slot.";
		else
			std::cout << this->_inventory[i]->getType() << " materia.";
		std::cout << std::endl;
	}
	return ;
}

void	Character::_initializeEmptyInventory(void)
{
	for (int i = 0; i < this->_inventorySize; i++)
		this->_inventory[i] = NULL;
	return ;
}

void	Character::_deleteInventory(void)
{
	for (int i = 0; i < this->_inventorySize; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	return ;
}