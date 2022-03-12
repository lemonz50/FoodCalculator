// WorkoutInformation.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "WorkoutInformation.h"
#include <string>
#include <iostream>
#include <boost/locale.hpp>

using namespace boost::locale;

// This is an example of an exported variable
WORKOUTINFORMATION_API int nWorkoutInformation=0;

// This is an example of an exported function.
WORKOUTINFORMATION_API int fnWorkoutInformation(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CWorkoutInformation::CWorkoutInformation()
{
    return;
}

std::string CWorkoutInformation::getBench() {
	std::cout << translate("Fitness","Calculating bench press reps.") << std::endl;
	return "bench press 10 reps";
}
