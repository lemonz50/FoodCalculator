// UI.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "UI.h"
#include <String>
#include <iostream>
#include "../Application/Application.h"
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;


// This is an example of an exported variable
UI_API int nUI=0;

// This is an example of an exported function.
UI_API int fnUI(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CUI::CUI()
{
    return;
}

void CUI::start() {

	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path(".");
	gen.add_messages_domain("hello");

	// Generate locales and imbue them to iostream
	locale::global(gen("de_DE.UTF - 8"));
	cout.imbue(locale());

	CApplication app = CApplication();

	std::string x;
	std::cout << "Hello, welcome to the basic food/workout calculator :)"<< std::endl << translate("Instruction","Press any button to start");
	system("pause");
	app.findWhatToDo();
	cout << "press any key to exit ";
}
