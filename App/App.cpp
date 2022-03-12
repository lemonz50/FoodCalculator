// App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "AppClass.h"
#include <boost/locale.hpp>

using namespace boost::locale;
int main()
{
	generator gen;
	std::locale::global(gen("de_DE.UTF-8"));
	
	CApplication app = CApplication();
	app.findWhatToDo();
}
