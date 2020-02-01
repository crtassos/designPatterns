#include "includes.h"
#include "HotDrinkFactory.hpp"
#include "DrinkFactory.hpp"


enum class drinks {
	Tea,
	Coffee
};

unique_ptr<HotDrink>make_drink(string type) {
	
	unique_ptr<HotDrink> ptr;

	if (type == "Tea")
	{
		ptr = make_unique<Tea>();
		ptr->prepare(200);
	}
	else {
		ptr = make_unique<Coffee>();
		ptr->prepare(50);
	}

	return ptr;
}



int main()
{
	DrinkFactory fact;

	fact.make_drink("coffee");
	fact.make_drink("tea");


	return 0;
}