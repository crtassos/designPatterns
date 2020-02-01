#pragma once
#include "HotDrink.hpp"

struct HotDrinkFactory { // Abstract Factory

	virtual unique_ptr<HotDrink> make() const = 0;
};

struct TeaFactory : HotDrinkFactory
{
	unique_ptr<HotDrink> make() const override {
		return unique_ptr<Tea>(new Tea);
	}
};

struct CoffeeFactory : HotDrinkFactory {

	unique_ptr<HotDrink> make() const override {
		return unique_ptr<Coffee>(new Coffee);
	}
};



