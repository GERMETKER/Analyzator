#include <iostream>
#include <fstream>
#include <string>
#include "Anolyzator.hpp"

int main()
{
	std::ifstream Names;
	Names.open("russian_names.csv");
	Anolyzator zed;

	zed.FillVect(&Names);
	zed.PrintVect();

	/*std::ifstream Names;
	Names.open("russian_names.csv");
	std::string stroka;
	stroka = "";
	std::getline(Names, stroka, '\n');
	std::cout << stroka << "\n";*/
	/*zed.FillVect(&Names);
	zed.PrintVect();*/
}