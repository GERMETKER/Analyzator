#include <iostream>
#include <fstream>
#include <string>
#include "Anolyzator.hpp"

int main()
{
	std::ifstream Names;
	Names.open("russian_names.csv");
	Anolyzator zed(&Names);
	zed.MostPopularName();
	zed.MostPopularWName();
	zed.MostPopularMName();

	zed.NamesWithNoOwners();

	zed.MedianSize();
	zed.MiddleSize();

	zed.IsRare();
	zed.IsUsual();

	zed.HowManyCounts("РђР»РµРєСЃРµР№");//Это Алексей, только записанный каким-то странным шрифтом
	zed.IsRare("РђР»РµРєСЃРµР№");
	zed.Diffrent("РђР»РµРєСЃРµР№");

	Names.close();
	/*zed.FillSet(&Names);
	zed.PrintSet();*/
	/*std::ifstream Names;
	Names.open("russian_names.csv");
	std::string stroka;
	stroka = "";
	std::getline(Names, stroka, '\n');
	std::cout << stroka << "\n";*/
	/*zed.FillVect(&Names);
	zed.PrintVect();*/
}