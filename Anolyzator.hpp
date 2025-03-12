#ifndef ANOLYZATOR_HPP
#define ANOLYZATOR_HPP

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <fstream>
#include <string>
#include <Windows.h>
#include "Name.hpp"
//multiset я что-то не понял так что его не будет

class Anolyzator
{
public:
	Anolyzator() = default;
	Anolyzator(std::ifstream *names);

	void FillVect(std::ifstream *names);
	void FillList(std::ifstream *names);
	void FillSet(std::ifstream *names);

	void PrintVect();

private:
	std::vector<Name> vect_names_;
	std::list<Name> list_names_;
	std::set<Name> set_names_;

	
};



#endif