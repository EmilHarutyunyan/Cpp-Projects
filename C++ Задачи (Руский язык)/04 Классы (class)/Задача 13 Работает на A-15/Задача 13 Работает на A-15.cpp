// Задача 13 Работает на A-15.cpp

/*
	Известно, что на заводе существуют отдельные рабочие группы, имеющие заводские номера,
	в которой они работают. Требуется написать программу, которая будет получать количество групп в записи, а затем по
	название цеха каждой группы в последовательности, количество рабочих в группе и каждый из них
	Фамилия и дата рождения работника. Программа должна отображать имена всех работников, которые:
	Они работают на заводе а-15. Если нет, выведите на экран сообщение “Not found!” сообщение.
	Используйте групповые и рабочие уроки при решении программы.
*/

/*
Примеры
====== Тест #1 =======
Входные данные
3
A-15
3
Karapetyan Garnik 1950
Davdyan Gor 1990
Avagyan Simon 1983
B-58
2
Vaxarshyan Vaxarsh 1995
Araqelyan Karen 1980
K-03
2
Hakobyan Hakob 1992
Martirosyan Martiros 1999

Результат работы
Karapetyan Garnik 
Davdyan Gor 
Avagyan Simon 

*/

#include <iostream>
#include <string>
#include <vector>

class Group
{
public:
	Group(const std::string &g);
	~Group();

protected:
	std::string mGroup;
};

Group::Group(const std::string &g)
	 : mGroup(g)
{
}

Group::~Group()
{
}

class Worker : public Group
{
public:
	Worker(const std::string &ln, const std::string &n, int a, const std::string &g);
	~Worker();
	void printInfo();
	std::string check_a15();

protected:
	std::string mLast_name;
	std::string mName;
	int mAge;
};

Worker::Worker(const std::string &ln, const std::string &n, int a, const std::string &g)
	 : mLast_name(ln), mName(n), mAge(a), Group(g)
{
}

Worker::~Worker()
{
}
std::string Worker::check_a15()
{
	return mGroup;
}

void Worker::printInfo()
{
	std::cout << mLast_name << " " << mName;
}

int main()
{
	int age, n_group, n_worker;
	std::string groups;
	std::string name;
	std::string surname;
	std::vector<Group> group;
	std::vector<Worker> worker;
	bool check = true;
	std::cin >> n_group;
	for (int i = 0; i < n_group; ++i)
	{
		std::cin >> groups;
		group.push_back(groups);
		std::cin >> n_worker;
		int count = 0;
		for (int j = 0; j < n_worker; j++)
		{
			std::cin >> name >> surname >> age;
			worker.push_back(Worker{name, surname, age, groups});
		}
	}
	for (int i = 0; i < worker.size(); ++i)
	{
		if ("A-15" == worker[i].check_a15())
		{
			worker[i].printInfo();
			std::cout << "\n";
			check = false;
		}
	}

	if (check)
		std::cout << "Not found!";
}