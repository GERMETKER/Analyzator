#ifndef ANOLYZATOR_HPP
#define ANOLYZATOR_HPP

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <fstream>
#include <string>
#include <Windows.h>
#include <algorithm>
#include "Name.hpp"

//multiset я что-то не понял так что его не будет

class Anolyzator
{
public:
	Anolyzator() = default;
	Anolyzator(std::ifstream *names);

	void Choose();

	void FillVect(std::ifstream *names);
	void FillList(std::ifstream *names);
	void FillSet(std::ifstream *names);

	void PrintVect();
	void PrintList();
	void PrintSet();

	void MostPopularName();
	void MostPopularWName();
	void MostPopularMName();

	void NamesWithNoOwners();

	void MedianSize();
	void MiddleSize();

	void IsRare();
	void IsUsual();

	void HowManyCounts(std::string name);
	void IsRare(std::string name);
	void Diffrent(std::string name);

private:
	std::vector<Name> vect_names_;
	std::list<Name> list_names_;
	std::set<Name> set_names_;

	std::vector<Name> noOwn_vect_names_;
	std::list<Name> noOwn_list_names_;
	std::set<Name> noOwn_set_names_;

	std::vector<int> vect_all_counts_;
	std::vector<int> vect_m_counts_;
	std::vector<int> vect_w_counts_;
	std::list<int> list_all_counts_;
	std::list<int> list_m_counts_;
	std::list<int> list_w_counts_;
	std::set<int> set_all_counts_;
	std::set<int> set_m_counts_;
	std::set<int> set_w_counts_;

	int median_num_all_;
	int median_num_w_;
	int median_num_m_;

	int middle_num_all_;
	int middle_num_m_;
	int middle_num_w_;
	
	int rare_all_;
	int rare_m_;
	int rare_w_;

	int usual_all_;
	int usual_m_;
	int usual_w_;

	int choose_;

	
};



#endif