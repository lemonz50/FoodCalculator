// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"
#include "../DietScheduler/DietScheduler.h"
#include "../WorkoutScheduler/WorkoutScheduler.h"
#include "../FoodInformation/FoodInformation.h"
#include "../WorkoutInformation/WorkoutInformation.h"
#include <String>
#include <iostream>
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;

// This is an example of an exported variable
APPLICATION_API int nApplication=0;

// This is an example of an exported function.
APPLICATION_API int fnApplication(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CApplication::CApplication()
{
    return;
}

void CApplication::findWhatToDo()
{

	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path(".");
	gen.add_messages_domain("hello");

	// Generate locales and imbue them to iostream
	locale::global(gen("de_DE.UTF - 8"));
	cout.imbue(locale());

	cout << translate("Welcome to the Food Calculator!") << endl;

	CWorkoutScheduler workoutScheduler = CWorkoutScheduler();
	CDietScheduler dietScheduler = CDietScheduler();
	CFoodInformation foodInfo = CFoodInformation();

	std::string food;
	std::string workout;

	std::cout << "What do you want to eat?";
	std::cin >> food;

	std::cout << "What do you want to do?";
	std::cin >> workout;

	std::cout << dietScheduler.getWhatToEat(food);
	std::cout << workoutScheduler.getWorkout(workout);

	std::cout << "Eat an " << foodInfo.getApple() << " too" << std::endl;
}
