// FoodInformation.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "FoodInformation.h"
#include <string>
#include <iostream>
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;

// This is an example of an exported variable
FOODINFORMATION_API int nFoodInformation=0;

// This is an example of an exported function.
FOODINFORMATION_API int fnFoodInformation(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CFoodInformation::CFoodInformation()
{
    return;
}

std::string CFoodInformation::getApple() {

	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path(".");
	gen.add_messages_domain("hello");

	// Generate locales and imbue them to iostream
	locale::global(gen("de_DE.UTF - 8"));
	cout.imbue(locale());

	std::cout << translate("Food","Getting food suggestions.") << std::endl;
	return "apple";
}
