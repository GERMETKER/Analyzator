#include "Anolyzator.hpp"

Anolyzator::Anolyzator(std::ifstream *names)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Выберите: куда заполнять данные: 1 - в вектор; 2 - в лист; 3 - в сет\n";
	std::cin >> choose_;
	if (choose_ == 1)
	{
		FillVect(names);
	}
	else if (choose_ == 2)
	{
		FillList(names);
	}
	else if (choose_ == 3)
	{
		FillSet(names);
	}
}

void Anolyzator::Choose()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Выберите: куда заполнять данные: 1 - в вектор; 2 - в лист; 3 - в сет\n";
	std::cout << "Выберите: куда заполнять данные: 1 - в вектор; 2 - в лист; 3 - в сет\n";
	std::cin >> choose_;
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
			if (temp_id == "")//дальше пустые ячейки
			{
				break;
			}
			else
			{
				std::getline(*names, temp_name, ';');
				std::getline(*names, temp_sex, ';');
				std::getline(*names, temp_people_count, ';');
				std::getline(*names, skip, '\n');
				//std::cin.ignore(32000, '\n');
				Name temp_obj(temp_name, std::stoi(temp_id), std::stoi(temp_people_count), temp_sex);
				vect_names_.push_back(temp_obj);
				n++;
			}

		}
	}
	std::cout << "Вывести все имена? 1 - Да; 2 - Нет\n";
	int print;
	std::cin >> print;
	if (print == 1)
	{
		for (Name i : vect_names_)
		{
			std::cout << i.id_ << " " << i.name_ << " " << i.people_count_ << " " << i.sex_ << "\n";
		}
	}
}

void Anolyzator::FillList(std::ifstream *names)
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
			if (temp_id == "")//дальше пустые ячейки
			{
				break;
			}
			else
			{
				std::getline(*names, temp_name, ';');
				std::getline(*names, temp_sex, ';');
				std::getline(*names, temp_people_count, ';');
				std::getline(*names, skip, '\n');
				//std::cin.ignore(32000, '\n');
				Name temp_obj(temp_name, std::stoi(temp_id), std::stoi(temp_people_count), temp_sex);
				list_names_.push_back(temp_obj);
				n++;
			}

		}
	}
	std::cout << "Вывести все имена? 1 - Да; 2 - Нет\n";
	int print;
	std::cin >> print;
	if (print == 1)
	{
		for (Name i : list_names_)
		{
			std::cout << i.id_ << " " << i.name_ << " " << i.people_count_ << " " << i.sex_ << "\n";
		}
	}
}

void Anolyzator::FillSet(std::ifstream *names)
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
			if (temp_id == "")//дальше пустые ячейки
			{
				break;
			}
			else
			{
				std::getline(*names, temp_name, ';');
				std::getline(*names, temp_sex, ';');
				std::getline(*names, temp_people_count, ';');
				std::getline(*names, skip, '\n');
				Name temp_obj(temp_name, std::stoi(temp_id), std::stoi(temp_people_count), temp_sex);//
				//set_names_.insert(temp_obj);
				//Данная строка вызывает у меня большое недоумение
				//Вроде добоавляю элемент как надо, даже ошибка не отмечается, однако не компелируется и выводит
				//ошибку в не моём файле в 2420 строке
				//Пока значит без этого
				n++;
			}

		}
	}
	std::cout << "Вывести все имена? 1 - Да; 2 - Нет\n";
	int print;
	std::cin >> print;
	if (print == 1)
	{
		for (Name i : set_names_)
		{
			std::cout << i.id_ << " " << i.name_ << " " << i.people_count_ << " " << i.sex_ << "\n";
		}
	}
}

void Anolyzator::PrintVect()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (Name i : vect_names_)
	{
		std::cout << i.id_ << " " << i.name_ << " " << i.people_count_ << " " << i.sex_ << "\n";
	}
}

void Anolyzator::PrintList()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (Name i : list_names_)
	{
		std::cout << i.id_ << " " << i.name_ << " " << i.people_count_ << " " << i.sex_ << "\n";
	}
}

void Anolyzator::PrintSet()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (Name i : set_names_)
	{
		std::cout << i.id_ << " " << i.name_ << " " << i.people_count_ << " " << i.sex_ << "\n";
	}
}

void Anolyzator::MostPopularName()
{
	std::string pop_name;
	int pop_id = 0;
	int cofAll = 0, cofHis = 0;
	if (choose_ == 1)
	{
		for (Name i : vect_names_)
		{
			if (i.id_ == 19903)
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
			}
			if (i.people_count_ > cofHis)
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
			}
		}
		for (Name i : vect_names_)
		{
			if (i.name_ == pop_name)
			{
				cofAll += i.people_count_;
			}
		}
		std::cout << "Самое популярное имя: " << pop_name << "\n";
		std::cout << "Количество носителей своего пола: " << cofHis << "; Количество носителей всех полов: " << cofAll << "\n";
		std::cout << "ID: " << pop_id << "\n";
	}
	else if (choose_ == 2)
	{
		for (Name i : list_names_)
		{
			if (i.id_ == 19903)
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
			}
			if (i.people_count_ > cofHis)
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
			}
		}
		for (Name i : list_names_)
		{
			if (i.name_ == pop_name)
			{
				cofAll += i.people_count_;
			}
		}
		std::cout << "Самое популярное имя: " << pop_name << "\n";
		std::cout << "Количество носителей своего пола: " << cofHis << "; Количество носителей всех полов: "
			<< cofAll << "ID: " << pop_id << "\n";
	}
	else if (choose_ == 2)
	{
		for (Name i : set_names_)
		{
			if (i.id_ == 19903)
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
			}
			if (i.people_count_ > cofHis)
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
			}
		}
		for (Name i : set_names_)
		{
			if (i.name_ == pop_name)
			{
				cofAll += i.people_count_;
			}
		}
		std::cout << "Самое популярное имя: " << pop_name << "\n";
		std::cout << "Количество носителей своего пола: " << cofHis << "; Количество носителей всех полов: " << cofAll << "\n";
		std::cout << "ID: " << pop_id << "\n\n";
	}
	else
	{
		Choose();
	}
}

void Anolyzator::MostPopularWName()
{
	std::string pop_name;
	int pop_id = 0;
	int cofHis = 0;
	int n = 0;
	if (choose_ == 1)
	{
		for (Name i : vect_names_)
		{
			if (n == 0 && i.sex_ == "Р–")
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
				n++;
			}
			if (i.people_count_ > cofHis && i.sex_ == "Р–")
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
				n++;
			}
		}
		std::cout << "Самое популярное женское имя: " << pop_name << "\n";
		std::cout << "Количество носителей: " << cofHis << "\n";
		std::cout << "ID: " << pop_id << "\n\n";
	}
	else if (choose_ == 2)
	{
		for (Name i : list_names_)
		{
			if (n == 0 && i.sex_ == "Р–")
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
				n++;
			}
			if (i.people_count_ > cofHis && i.sex_ == "Р–")
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
				n++;
			}
		}
		std::cout << "Самое популярное женское имя: " << pop_name << "\n";
		std::cout << "Количество носителей: " << cofHis << "\n";
		std::cout << "ID: " << pop_id << "\n\n";
	}
	else if (choose_ == 2)
	{
		for (Name i : set_names_)
		{
			if (n == 0 && i.sex_ == "Р–")
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
				n++;
			}
			if (i.people_count_ > cofHis && i.sex_ == "Р–")
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
				n++;
			}
		}
		std::cout << "Самое популярное женское имя: " << pop_name << "\n";
		std::cout << "Количество носителей: " << cofHis << "\n";
		std::cout << "ID: " << pop_id << "\n\n";
	}
	else
	{
		Choose();
	}
}

void Anolyzator::MostPopularMName()
{
	std::string pop_name;
	int pop_id = 0;
	int cofHis = 0;
	int n = 0;
	if (choose_ == 1)
	{
		for (Name i : vect_names_)
		{
			if (n == 0 && i.sex_ == "Рњ")
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
				n++;
			}
			if (i.people_count_ > cofHis && i.sex_ == "Рњ")
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
				n++;
			}
		}
		std::cout << "Самое популярное мужское имя: " << pop_name << "\n";
		std::cout << "Количество носителей: " << cofHis << "\n";
		std::cout << "ID: " << pop_id << "\n\n";
	}
	else if (choose_ == 2)
	{
		for (Name i : list_names_)
		{
			if (n == 0 && i.sex_ == "Рњ")
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
				n++;
			}
			if (i.people_count_ > cofHis && i.sex_ == "Рњ")
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
				n++;
			}
		}
		std::cout << "Самое популярное мужское имя: " << pop_name << "\n";
		std::cout << "Количество носителей: " << cofHis << "\n";
		std::cout << "ID: " << pop_id << "\n\n";
	}
	else if (choose_ == 2)
	{
		for (Name i : set_names_)
		{
			if (n == 0 && i.sex_ == "Рњ")
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
				n++;
			}
			if (i.people_count_ > cofHis && i.sex_ == "Рњ")
			{
				pop_name = i.name_;
				pop_id = i.id_;
				cofHis = i.people_count_;
				n++;
			}
		}
		std::cout << "Самое популярное мужское имя: " << pop_name << "\n";
		std::cout << "Количество носителей: " << cofHis << "\n";
		std::cout << "ID: " << pop_id << "\n\n";
	}
	else
	{
		Choose();
	}
}

void Anolyzator::NamesWithNoOwners()
{
	if (choose_ == 1)
	{
		int zero_names_all = 0;
		int zero_names_w= 0;
		int zero_names_m = 0;
		for (Name i : vect_names_)
		{
			if (i.people_count_ == 0)
			{
				++zero_names_all;
				noOwn_vect_names_.push_back(i);
				if (i.sex_ == "Р–")
				{
					++zero_names_w;
				}
				else if (i.sex_ == "Рњ")
				{
					++zero_names_m;
				}
			}
		}
		std::cout << "Всего имён без владельцев: " << zero_names_all << "\n";
		std::cout << "Женских имён без владельцев: " << zero_names_w << "\n";
		std::cout << "Мужских имён без владельцев: " << zero_names_m << "\n";
		std::cout << "Вывести все имена без владельцев? 1 - Да; 2 - Нет\n";
		int print;
		std::cin >> print;
		if (print == 1)
		{
			for (Name i : noOwn_vect_names_)
			{
				std::cout << i.id_ << " " << i.name_ << " " << i.people_count_ << " " << i.sex_ << "\n";
			}
		}
	}
	else if (choose_ == 2)
	{
		int zero_names_all = 0;
		int zero_names_w = 0;
		int zero_names_m = 0;
		for (Name i : list_names_)
		{
			if (i.people_count_ == 0)
			{
				++zero_names_all;
				noOwn_list_names_.push_back(i);
				if (i.sex_ == "Р–")
				{
					++zero_names_w;
				}
				else if (i.sex_ == "Рњ")
				{
					++zero_names_m;
				}
			}
		}
		std::cout << "Всего имён без владельцев: " << zero_names_all << "\n";
		std::cout << "Женских имён без владельцев: " << zero_names_w << "\n";
		std::cout << "Мужских имён без владельцев: " << zero_names_m << "\n";
		std::cout << "Вывести все имена без владельцев? 1 - Да; 2 - Нет\n";
		int print;
		std::cin >> print;
		if (print == 1)
		{
			for (Name i : noOwn_list_names_)
			{
				std::cout << i.id_ << " " << i.name_ << " " << i.people_count_ << " " << i.sex_ << "\n";
			}
		}
	}
	else if (choose_ == 3)
	{
		int zero_names_all = 0;
		int zero_names_w = 0;
		int zero_names_m = 0;
		for (Name i : set_names_)
		{
			if (i.people_count_ == 0)
			{
				++zero_names_all;
				//noOwn_set_names_.insert(i);
				if (i.sex_ == "Р–")
				{
					++zero_names_w;
				}
				else if (i.sex_ == "Рњ")
				{
					++zero_names_m;
				}
			}
		}
		std::cout << "Всего имён без владельцев: " << zero_names_all << "\n";
		std::cout << "Женских имён без владельцев: " << zero_names_w << "\n";
		std::cout << "Мужских имён без владельцев: " << zero_names_m << "\n";
		std::cout << "Вывести все имена без владельцев? 1 - Да; 2 - Нет\n";
		int print;
		std::cin >> print;
		if (print == 1)
		{
			for (Name i : noOwn_set_names_)
			{
				std::cout << i.id_ << " " << i.name_ << " " << i.people_count_ << " " << i.sex_ << "\n";
			}
		}
	}
	else
	{
		Choose();
	}
}

void Anolyzator::MedianSize()
{
	if (choose_ == 1)
	{
		int n = 0;
		
		vect_all_counts_.clear();
		vect_m_counts_.clear();
		vect_w_counts_.clear();

		for (Name i : vect_names_)
		{
			if (n > 0)//я отсартировываю, чтобы добовлялись только различные числа
			{
				if (std::find(vect_all_counts_.begin(), vect_all_counts_.end(), i.people_count_) == vect_all_counts_.end())
				{
					vect_all_counts_.push_back(i.people_count_);
					if (i.sex_ == "Рњ" && std::find(vect_m_counts_.begin(), vect_m_counts_.end(), i.people_count_)
						== vect_m_counts_.end())
					{
						vect_m_counts_.push_back(i.people_count_);
					}
					else if (i.sex_ == "Р–" && std::find(vect_w_counts_.begin(), vect_w_counts_.end(), i.people_count_)
						== vect_w_counts_.end())
					{
						vect_w_counts_.push_back(i.people_count_);
					}
				}
			}
			else
			{
				vect_all_counts_.push_back(i.people_count_);
				if (i.sex_ == "Рњ")
				{
					vect_m_counts_.push_back(i.people_count_);
				}
				else if (i.sex_ == "Р–")
				{
					vect_w_counts_.push_back(i.people_count_);
				}
				n++;
			}
		}
		int temp = 0;
		//for (int i = 0; i < vect_all_counts_.size() - 1; i++) {
		//	for (int j = 0; j < vect_all_counts_.size() - i - 1; j++) {
		//		if (vect_all_counts_[j] > vect_all_counts_[j + 1]) {
		//			// меняем элементы местами
		//			temp = vect_all_counts_[j];
		//			vect_all_counts_[j] = vect_all_counts_[j + 1];
		//			vect_all_counts_[j + 1] = temp;
		//		}
		//	}
		//}

		std::sort(begin(vect_all_counts_), end(vect_all_counts_));
		std::sort(begin(vect_m_counts_), end(vect_m_counts_));
		std::sort(begin(vect_w_counts_), end(vect_w_counts_));

		/*for (int i : vect_all_counts_)
		{
			std::cout << i << "\n";
		}*/
		int middle_all = (vect_all_counts_.size() / 2) - 1;
		int middle2_all = middle_all + 1;
		median_num_all_ = (vect_all_counts_[middle_all] + vect_all_counts_[middle2_all]) / 2;

		int middle_m = (vect_m_counts_.size() / 2) - 1;
		int middle2_m = middle_m + 1;
		median_num_m_ = (vect_m_counts_[middle_m] + vect_m_counts_[middle2_m]) / 2;

		int middle_w = (vect_w_counts_.size() / 2) - 1;
		int middle2_w = middle_w + 1;
		median_num_w_ = (vect_w_counts_[middle_w] + vect_w_counts_[middle2_w]) / 2;

		std::cout << "Медианное количество людей на все имена: " << median_num_all_ << "\n";
		std::cout << "Медианное количество людей на мужские имена: " << median_num_m_ << "\n";
		std::cout << "Медианное количество людей на женские имена: " << median_num_w_ << "\n";
		std::cout << "Вывести все количества людей на имя? 1 - Да; 2 - Нет\n";

		int print;
		std::cin >> print;
		if (print == 1)
		{
			for (int i : vect_all_counts_)
			{
				std::cout << i << "\n";
			}
		}
	}
	else if (choose_ == 2)
	{
		int n = 0;

		list_all_counts_.clear();
		list_m_counts_.clear();
		list_w_counts_.clear();

		for (Name i : list_names_)
		{
			if (n > 0)//я отсортировываю, чтобы добовлялись только различные числа
			{
				if (std::find(list_all_counts_.begin(), list_all_counts_.end(), i.people_count_) == list_all_counts_.end())
				{
					list_all_counts_.push_back(i.people_count_);
					if (i.sex_ == "Рњ" && std::find(list_m_counts_.begin(), list_m_counts_.end(), i.people_count_)
						== list_m_counts_.end())
					{
						list_m_counts_.push_back(i.people_count_);
					}
					else if (i.sex_ == "Р–" && std::find(list_w_counts_.begin(), list_w_counts_.end(), i.people_count_)
						== list_w_counts_.end())
					{
						list_w_counts_.push_back(i.people_count_);
					}
				}
			}
			else
			{
				list_all_counts_.push_back(i.people_count_);
				if (i.sex_ == "Рњ")
				{
					list_m_counts_.push_back(i.people_count_);
				}
				else if (i.sex_ == "Р–")
				{
					list_w_counts_.push_back(i.people_count_);
				}
				n++;
			}
		}
		
		list_all_counts_.sort();
		list_m_counts_.sort();
		list_w_counts_.sort();

		int middle_all = (list_all_counts_.size() / 2) - 1;
		int middle2_all = middle_all + 1;
		/*middle_num_ = (list_all_counts_[middle] + list_all_counts_[middle2]) / 2;*/
		n = 0;
		int num1_all = 0, num2_all = 0;
		for (int i : list_all_counts_)
		{
			if (n == middle_all)
			{
				num1_all = i;
				++n;
			}
			else if (n == middle2_all)
			{
				num2_all = i;
				break;
			}
			else
			{
				++n;
			}
		}
		n = 0;
		median_num_all_ = (num1_all + num2_all) / 2;

		int middle_m = (list_m_counts_.size() / 2) - 1;
		int middle2_m = middle_m + 1;
		/*middle_num_ = (list_all_counts_[middle] + list_all_counts_[middle2]) / 2;*/
		n = 0;
		int num1_m = 0, num2_m = 0;
		for (int i : list_m_counts_)
		{
			if (n == middle_m)
			{
				num1_m = i;
				++n;
			}
			else if (n == middle2_m)
			{
				num2_m = i;
				break;
			}
			else
			{
				++n;
			}
		}
		n = 0;
		median_num_m_ = (num1_m + num2_m) / 2;

		int middle_w = (list_w_counts_.size() / 2) - 1;
		int middle2_w = middle_w + 1;
		/*middle_num_ = (list_all_counts_[middle] + list_all_counts_[middle2]) / 2;*/
		n = 0;
		int num1_w = 0, num2_w = 0;
		for (int i : list_w_counts_)
		{
			if (n == middle_w)
			{
				num1_w = i;
				++n;
			}
			else if (n == middle2_w)
			{
				num2_w = i;
				break;
			}
			else
			{
				++n;
			}
		}
		n = 0;
		median_num_w_ = (num1_w + num2_w) / 2;

		std::cout << "Медианное количество людей на все имена: " << median_num_all_ << "\n";
		std::cout << "Медианное количество людей на мужские имена: " << median_num_m_ << "\n";
		std::cout << "Медианное количество людей на женские имена: " << median_num_w_ << "\n";
		std::cout << "Вывести все количества людей на имя? 1 - Да; 2 - Нет\n";

		int print;
		std::cin >> print;
		if (print == 1)
		{
			for (int i : list_all_counts_)
			{
				std::cout << i << "\n";
			}
		}
	}
	else if (choose_ == 3)
	{
		for (Name i : set_names_)
		{
			set_all_counts_.insert(i.people_count_);
		}

		//set

		for (int i : set_all_counts_)
		{
			std::cout << i << "\n";
		}

		int middle = (set_all_counts_.size() / 2) - 1;
		int middle2 = middle + 1;
		/*middle_num_ = (set_all_counts_[middle] + set_all_counts_[middle2]) / 2;*/
		std::cout << "Медианное количество людей на одно имя: " << median_num_all_ << "\n";
		std::cout << "Вывести все количества людей на имя? 1 - Да; 2 - Нет\n";

		int print;
		std::cin >> print;
		if (print == 1)
		{
			for (int i : set_all_counts_)
			{
				std::cout << i << "\n";
			}
		}
	}
	else
	{
		Choose();
	}
}

void Anolyzator::MiddleSize()
{
	if (choose_ == 1)
	{
		int n = 0;
		int count_all = 0;
		int sum_all = 0;

		int count_m = 0;
		int sum_m = 0;

		int count_w = 0;
		int sum_w = 0;

		vect_all_counts_.clear();
		vect_m_counts_.clear();
		vect_w_counts_.clear();

		for (Name i : vect_names_)
		{
			if (n > 0)//я отсартировываю, чтобы добовлялись только различные числа
			{
				if (std::find(vect_all_counts_.begin(), vect_all_counts_.end(), i.people_count_) == vect_all_counts_.end())
				{
					vect_all_counts_.push_back(i.people_count_);
					count_all++;
					sum_all += i.people_count_;
					if (i.sex_ == "Рњ" && std::find(vect_m_counts_.begin(), vect_m_counts_.end(), i.people_count_)
						== vect_m_counts_.end())
					{
						count_m++;
						sum_m += i.people_count_;
					}
					else if (i.sex_ == "Р–" && std::find(vect_w_counts_.begin(), vect_w_counts_.end(), i.people_count_)
						== vect_w_counts_.end())
					{
						vect_w_counts_.push_back(i.people_count_);
						count_w++;
						sum_w += i.people_count_;
					}
				}
			}
			else
			{
				vect_all_counts_.push_back(i.people_count_);
				count_all++;
				sum_all += i.people_count_;
				if (i.sex_ == "Рњ")
				{
					count_m++;
					sum_m += i.people_count_;
				}
				else if (i.sex_ == "Р–")
				{
					vect_w_counts_.push_back(i.people_count_);
					count_w++;
					sum_w += i.people_count_;
				}
				n++;
			}
		}
		

		middle_num_all_ = sum_all / count_all;
		middle_num_m_ = sum_m / count_m;
		middle_num_w_ = sum_w / count_w;

		std::cout << "Среднее количество людей на все имена: " << middle_num_all_ << "\n";
		std::cout << "Среднее количество людей на мужские имена: " << middle_num_m_ << "\n";
		std::cout << "Среднее количество людей на женские имена: " << middle_num_w_ << "\n";

		std::cout << "Вывести все количества людей на имя? 1 - Да; 2 - Нет\n";

		int print;
		std::cin >> print;
		if (print == 1)
		{
			for (int i : vect_all_counts_)
			{
				std::cout << i << "\n";
			}
		}
	}
	else if (choose_ == 2)
	{
		int n = 0;

		int count_all = 0;
		int sum_all = 0;

		int count_m = 0;
		int sum_m = 0;

		int count_w = 0;
		int sum_w = 0;

		list_all_counts_.clear();
		list_m_counts_.clear();
		list_w_counts_.clear();

		for (Name i : list_names_)
		{
			if (n > 0)
			{
				if (std::find(list_all_counts_.begin(), list_all_counts_.end(), i.people_count_) == list_all_counts_.end())
				{
					list_all_counts_.push_back(i.people_count_);
					count_all++;
					sum_all += i.people_count_;
					if (i.sex_ == "Рњ" && std::find(list_m_counts_.begin(), list_m_counts_.end(), i.people_count_)
						== list_m_counts_.end())
					{
						list_m_counts_.push_back(i.people_count_);
						count_m++;
						sum_m += i.people_count_;
					}
					else if (i.sex_ == "Р–" && std::find(list_w_counts_.begin(), list_w_counts_.end(), i.people_count_)
						== list_w_counts_.end())
					{
						list_w_counts_.push_back(i.people_count_);
						count_w++;
						sum_w += i.people_count_;
					}
				}
			}
			else
			{
				list_all_counts_.push_back(i.people_count_);
				count_all++;
				sum_all += i.people_count_;
				if (i.sex_ == "Рњ")
				{
					list_m_counts_.push_back(i.people_count_);
					count_m++;
					sum_m += i.people_count_;
				}
				else if (i.sex_ == "Р–")
				{
					list_w_counts_.push_back(i.people_count_);
					count_w++;
					sum_w += i.people_count_;
				}
				n++;
			}
		}

		
		middle_num_all_ = sum_all / count_all;
		middle_num_m_ = sum_m / count_m;
		middle_num_w_ = sum_w / count_w;

		std::cout << "Среднее количество людей на все имена: " << middle_num_all_ << "\n";
		std::cout << "Среднее количество людей на мужские имена: " << middle_num_m_ << "\n";
		std::cout << "Среднее количество людей на женские имена: " << middle_num_w_ << "\n";

		std::cout << "Вывести все количества людей на имя? 1 - Да; 2 - Нет\n";

		int print;
		std::cin >> print;
		if (print == 1)
		{
			for (int i : list_all_counts_)
			{
				std::cout << i << "\n";
			}
		}
	}
	else if (choose_ == 3)
	{
		int count = 0;
		int sum = 0;
		for (Name i : set_names_)
		{
			count++;
			sum += i.people_count_;
		}

		//set


		middle_num_all_ = sum / count;
		std::cout << "Среднее количество людей на одно имя: " << middle_num_all_ << "\n";
		std::cout << "Вывести все количества людей на имя? 1 - Да; 2 - Нет\n";

		int print;
		std::cin >> print;
		if (print == 1)
		{
			for (int i : set_all_counts_)
			{
				std::cout << i << "\n";
			}
		}
	}
	else
	{
		Choose();
	}
}

void Anolyzator::IsRare()
{
	//За редкость я буду считать, если имя носит меньше 50 человек
	//
	//
	if (choose_ == 1)
	{
		int sum_all = 0;
		int sum_w = 0;
		int sum_m = 0;

		for (Name i : vect_names_)
		{
			sum_all += i.people_count_;
			if (i.sex_ == "Р–")
			{
				sum_w += i.people_count_;
			}
			else if(i.sex_ == "Рњ")
			{
				sum_m += i.people_count_;
			}
		}
		for (Name i : vect_names_)
		{
			if (i.people_count_ <= 50)
			{
				rare_all_++;
			}
			if (i.sex_ == "Р–" && i.people_count_ <= 50)
			{
				rare_w_++;
			}
			else if (i.sex_ == "Рњ" && i.people_count_ <= 50)
			{
				rare_m_++;
			}
		}

		std::cout << "Количество всех редких имён: " << rare_all_ << "\n";
		std::cout << "Количество женских редких имён: " << rare_w_ << "\n";
		std::cout << "Количество мужских редких имён: " << rare_m_ << "\n\n";
	}
	else if (choose_ == 2)
	{
		int sum_all = 0;
		int sum_w = 0;
		int sum_m = 0;

		for (Name i : list_names_)
		{
			sum_all += i.people_count_;
			if (i.sex_ == "Р–")
			{
				sum_w += i.people_count_;
			}
			else if (i.sex_ == "Рњ")
			{
				sum_m += i.people_count_;
			}
		}
		for (Name i : list_names_)
		{
			if (i.people_count_ <= 50)
			{
				rare_all_++;
			}
			if (i.sex_ == "Р–" && i.people_count_ <= 50)
			{
				rare_w_++;
			}
			else if (i.sex_ == "Рњ" && i.people_count_ <= 50)
			{
				rare_m_++;
			}
		}

		std::cout << "Количество всех редких имён: " << rare_all_ << "\n";
		std::cout << "Количество женских редких имён: " << rare_w_ << "\n";
		std::cout << "Количество мужских редких имён: " << rare_m_ << "\n\n";
	}
	else if (choose_ == 3)
	{
		int sum_all = 0;
		int sum_w = 0;
		int sum_m = 0;

		for (Name i : set_names_)
		{
			sum_all += i.people_count_;
			if (i.sex_ == "Р–")
			{
				sum_w += i.people_count_;
			}
			else if (i.sex_ == "Рњ")
			{
				sum_m += i.people_count_;
			}
		}
		for (Name i : set_names_)
		{
			if (i.people_count_ <= 50)
			{
				rare_all_++;
			}
			if (i.sex_ == "Р–" && i.people_count_ <= 50)
			{
				rare_w_++;
			}
			else if (i.sex_ == "Рњ" && i.people_count_ <= 50)
			{
				rare_m_++;
			}
		}

		std::cout << "Количество всех редких имён: " << rare_all_ << "\n";
		std::cout << "Количество женских редких имён: " << rare_w_ << "\n";
		std::cout << "Количество мужских редких имён: " << rare_m_ << "\n\n";
	}
	else
	{
		Choose();
	}
}

void Anolyzator::IsUsual()
{
	if (choose_ == 1)
	{
		int sum_all = 0;
		int sum_w = 0;
		int sum_m = 0;

		for (Name i : vect_names_)
		{
			sum_all += i.people_count_;
			if (i.sex_ == "Р–")
			{
				sum_w += i.people_count_;
			}
			else if (i.sex_ == "Рњ")
			{
				sum_m += i.people_count_;
			}
		}
		for (Name i : vect_names_)
		{
			if (i.people_count_ > 50)
			{
				rare_all_++;
			}
			if (i.sex_ == "Р–" && i.people_count_ > 50)
			{
				rare_w_++;
			}
			else if (i.sex_ == "Рњ" && i.people_count_ > 50)
			{
				rare_m_++;
			}
		}

		std::cout << "Количество всех обычных имён: " << rare_all_ << "\n";
		std::cout << "Количество женских обычных имён: " << rare_w_ << "\n";
		std::cout << "Количество мужских обычных имён: " << rare_m_ << "\n\n";
	}
	else if (choose_ == 2)
	{
		int sum_all = 0;
		int sum_w = 0;
		int sum_m = 0;

		for (Name i : list_names_)
		{
			sum_all += i.people_count_;
			if (i.sex_ == "Р–")
			{
				sum_w += i.people_count_;
			}
			else if (i.sex_ == "Рњ")
			{
				sum_m += i.people_count_;
			}
		}
		for (Name i : list_names_)
		{
			if (i.people_count_ > 50)
			{
				rare_all_++;
			}
			if (i.sex_ == "Р–" && i.people_count_ > 50)
			{
				rare_w_++;
			}
			else if (i.sex_ == "Рњ" && i.people_count_ > 50)
			{
				rare_m_++;
			}
		}

		std::cout << "Количество всех обычных имён: " << rare_all_ << "\n";
		std::cout << "Количество женских обычных имён: " << rare_w_ << "\n";
		std::cout << "Количество мужских обычных имён: " << rare_m_ << "\n\n";
	}
	else if (choose_ == 3)
	{
		int sum_all = 0;
		int sum_w = 0;
		int sum_m = 0;

		for (Name i : set_names_)
		{
			sum_all += i.people_count_;
			if (i.sex_ == "Р–")
			{
				sum_w += i.people_count_;
			}
			else if (i.sex_ == "Рњ")
			{
				sum_m += i.people_count_;
			}
		}
		for (Name i : set_names_)
		{
			if (i.people_count_ > 50)
			{
				rare_all_++;
			}
			if (i.sex_ == "Р–" && i.people_count_ > 50)
			{
				rare_w_++;
			}
			else if (i.sex_ == "Рњ" && i.people_count_ > 50)
			{
				rare_m_++;
			}
		}

		std::cout << "Количество всех обычных имён: " << rare_all_ << "\n";
		std::cout << "Количество женских обычных имён: " << rare_w_ << "\n";
		std::cout << "Количество мужских обычных имён: " << rare_m_ << "\n\n";
	}
	else
	{
		Choose();
	}
}

void Anolyzator::HowManyCounts(std::string name)
{
	if (choose_ == 1)
	{
		for (Name i : vect_names_)
		{
			if (i.name_ == name)
			{
				std::cout << "Количество людей с эти именем: " << i.people_count_ << "\n";
			}
		}
	}
	else if (choose_ == 2)
	{
		for (Name i : list_names_)
		{
			if (i.name_ == name)
			{
				std::cout << "Количество людей с эти именем: " << i.people_count_ << "\n";
			}
		}
	}
	else if (choose_ == 3)
	{
		for (Name i : set_names_)
		{
			if (i.name_ == name)
			{
				std::cout << "Количество людей с эти именем: " << i.people_count_ << "\n";
			}
		}
	}
	else
	{
		Choose();
	}
}

void Anolyzator::IsRare(std::string name)
{
	if (choose_ == 1)
	{
		int n = 0;
		for (Name i : vect_names_)
		{
			if (i.name_ == name && i.people_count_ <= 50)
			{
				std::cout << "Данное имя - редкое\n";
				n++;
			}
		}
		if (n == 0)
		{
			std::cout << "Данное имя - обычное\n";
		}

	}
	else if (choose_ == 2)
	{
		int n = 0;
		for (Name i : list_names_)
		{
			if (i.name_ == name && i.people_count_ <= 50)
			{
				std::cout << "Данное имя - редкое\n";
				n++;
			}
		}
		if (n == 0)
		{
			std::cout << "Данное имя - обычное\n";
		}
	}
	else if (choose_ == 3)
	{
		int n = 0;
		for (Name i : set_names_)
		{
			if (i.name_ == name && i.people_count_ <= 50)
			{
				std::cout << "Данное имя - редкое\n";
				n++;
			}
		}
		if (n == 0)
		{
			std::cout << "Данное имя - обычное\n";
		}
	}
	else
	{
		Choose();
	}
}

void Anolyzator::Diffrent(std::string name)
{
	if (choose_ == 1)
	{
		int min = 0, max = 0, mid = 0, sum = 0;
		int n = 0;
		for (Name i : vect_names_)
		{
			if (n == 0)
			{
				min = i.people_count_;
				max = i.people_count_;
			}
			else
			{
				if (i.people_count_ < min)
				{
					min = i.people_count_;
				}
				if (i.people_count_ > max)
				{
					max = i.people_count_;
				}
			}
		}
		for (int i : vect_all_counts_)
		{
			sum += i;
			n++;
		}

		mid = sum / n;

		std::cout << "Минимальное значение: " << min << "\n";
		std::cout << "Максимальное значение: " << max << "\n";
		std::cout << "Среднее значение: " << mid << "\n";

	}
	else if (choose_ == 2)
	{
		int min = 0, max = 0, mid = 0, sum = 0;
		int n = 0;
		for (Name i : list_names_)
		{
			if (n == 0)
			{
				min = i.people_count_;
				max = i.people_count_;
			}
			else
			{
				if (i.people_count_ < min)
				{
					min = i.people_count_;
				}
				if (i.people_count_ > max)
				{
					max = i.people_count_;
				}
			}
		}
		
		for (int i : list_all_counts_)
		{
			sum += i;
			n++;
		}

		mid = sum / n;

		std::cout << "Минимальное значение: " << min << "\n";
		std::cout << "Максимальное значение: " << max << "\n";
		std::cout << "Среднее значение: " << mid << "\n";
	}
	else if (choose_ == 3)
	{
		int min = 0, max = 0, mid = 0, sum = 0;
		int n = 0;
		for (Name i : set_names_)
		{
			if (n == 0)
			{
				min = i.people_count_;
				max = i.people_count_;
			}
			else
			{
				if (i.people_count_ < min)
				{
					min = i.people_count_;
				}
				if (i.people_count_ > max)
				{
					max = i.people_count_;
				}
			}
		}

		for (int i : set_all_counts_)
		{
			sum += i;
			n++;
		}
		mid = sum / n;

		std::cout << "Минимальное значение: " << min << "\n";
		std::cout << "Максимальное значение: " << max << "\n";
		std::cout << "Среднее значение: " << mid << "\n";
	}
	else
	{
		Choose();
	}
}
