#include "Anolyzator.hpp"

Anolyzator::Anolyzator(std::ifstream *names)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "¬ыберите: куда заполн€ть данные: 1 - в вектор; 2 - в лист; 3 - в сет\n";
	int choose;
	std::cin >> choose;
	if (choose == 1)
	{
		FillVect(names);
	}
	else if (choose == 2)
	{
		FillList(names);
	}
	else if (choose == 3)
	{
		FillSet(names);
	}
}

void Anolyzator::FillVect(std::ifstream *names)
{
	int n = 0;	

	std::string temp_name;
	std::string temp_id;
	std::string temp_people_count;
	std::string temp_sex;
	std::string skip;
	while (!names->eof())
	{
		temp_name = "";
		temp_id = "";
		temp_people_count = "";
		temp_sex = "";

		if (n == 0)
		{
			std::getline(*names, skip, '\n');
			/*Name temp_obj(stroka);
			vect_names_.push_back(temp_obj);*/
			n++;
		}
		else
		{
			std::getline(*names, temp_id, ';');
			std::getline(*names, temp_name, ';');
			std::getline(*names, temp_sex, ';');
			std::getline(*names, temp_people_count, ';');
			std::getline(*names, skip, '\n');
			Name temp_obj(temp_name, std::stoi(temp_id), std::stoi(temp_people_count), temp_sex);
			vect_names_.push_back(temp_obj);
			break;
		}
	}
}

void Anolyzator::FillList(std::ifstream *names)
{
}

void Anolyzator::FillSet(std::ifstream *names)
{
}

void Anolyzator::PrintVect()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (Name i : vect_names_)
	{
		std::cout << i.name_ << "\n";
	}
}
