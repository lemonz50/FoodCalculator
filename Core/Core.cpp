// Core.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Core.h"
#include <iostream>
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;

// This is an example of an exported variable
CORE_API int nCore=0;

// This is an example of an exported function.
CORE_API int fnCore(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCore::CCore()
{
    return;
}

void CCore::CoreOperation() {

	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path(".");
	gen.add_messages_domain("hello");

	// Generate locales and imbue them to iostream
	locale::global(gen("de_DE.UTF - 8"));
	cout.imbue(locale());
	std::cout << translate("Business","This is a core operation.") << std::endl;
}
