#ifndef NAME_HPP
#define NAME_HPP
#include <iostream>
class Name
{
public:
	Name() = default;
	Name(std::string name, int id, int people_count, std::string sex)
	{
		name_ = name;
		id_ = id;
		people_count_ = people_count;
		sex_ = sex;
	}
	std::string name_;
	int id_;
	int people_count_;
	std::string sex_;
	
	//Значения последних двух колонок я не добавил т.к. не понял что они означают и что с ними делать
};



#endif 