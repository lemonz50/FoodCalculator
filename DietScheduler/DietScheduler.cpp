// DietScheduler.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "DietScheduler.h"
#include "../Core/Core.h"
#include <string>
#include "../FoodInformation/FoodInformation.h"
#include <iostream>
#include "boost/locale.hpp"

using namespace std;
using namespace boost::locale;


// This is an example of an exported variable
DIETSCHEDULER_API int nDietScheduler=0;

// This is an example of an exported function.
DIETSCHEDULER_API int fnDietScheduler(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CDietScheduler::CDietScheduler()
{
    return;
}

std::string CDietScheduler::getWhatToEat(std::string food) {

	


	CCore core = CCore();
	if (food.empty()) {
		CFoodInformation foodInfo = CFoodInformation();
		food = foodInfo.getApple();
	}

	core.CoreOperation();
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path(".");
	gen.add_messages_domain("hello");

	// Generate locales and imbue them to iostream
	locale::global(gen("de_DE.UTF - 8"));
	cout.imbue(locale());

	std::cout << translate("Diet","Diet Scheduler working.") << std::endl;
	return food + " at noon";
}
