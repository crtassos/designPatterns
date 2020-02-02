#include "includes.h"
#include "HotDrinkFactory.hpp"
#include "DrinkFactory.hpp"
#include "PersonFactory.h"

 std::ostream& operator<<(std::ostream& os, const Person& p)
{
	os << "Person's name = " << p.name << "ID = " << p.id << endl;
	return os;
}

//int main()
//{
//	int id = 0;
//	PersonFactory p;
//
//	auto p1 = p.create_person("tassos");
//	cout << p1 << endl;
//
//	auto p2 = p.create_person("peter");
//	cout << p2 << endl;
//	
//
//	return 0;
//}


