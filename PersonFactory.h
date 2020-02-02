#pragma once
#include "Persons.h"

struct PersonFactory : Person
{
	int id{0};
public :
	Person create_person(const std::string& name)
	{
		return {id++, name};
	}

	// friend std::ostream &operator<<(std::ostream &os, const Person &p)
	//{
	//	os << "Person's name = " << p.name << "ID = " << p.id << endl;
	//		return os;
	//}
};

