// WorkoutScheduler.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "WorkoutScheduler.h"

#include <string>
#include "../WorkoutInformation/WorkoutInformation.h"
#include <iostream>
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;

// This is an example of an exported variable
WORKOUTSCHEDULER_API int nWorkoutScheduler=0;

// This is an example of an exported function.
WORKOUTSCHEDULER_API int fnWorkoutScheduler(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CWorkoutScheduler::CWorkoutScheduler()
{
    return;
}

std::string CWorkoutScheduler::getWorkout(std::string exercise) {

	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path(".");
	gen.add_messages_domain("hello");

	// Generate locales and imbue them to iostream
	locale::global(gen("de_DE.UTF - 8"));
	cout.imbue(locale());

	if (exercise.empty()) {
		CWorkoutInformation workoutInfo = CWorkoutInformation();
		exercise = workoutInfo.getBench();
	}
	std::cout << translate("Time", "Scheduling workout") << std::endl;
	return exercise + " at 3:30";
 }