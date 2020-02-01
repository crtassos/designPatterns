#pragma once

#include <iostream>
#include <memory>
using namespace std;

struct HotDrink {

	virtual ~HotDrink() = default;
	virtual void prepare(int volume) = 0;
};

struct Tea : HotDrink
{
	void prepare(int volume) override {
		cout << "Take a tea bag : " 
			<< volume << endl;
	}
};

struct Coffee : HotDrink {

	void prepare(int volume) override {
		cout << "Grind some beans : " 
			<< volume << endl;
	}
};