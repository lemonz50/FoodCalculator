// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the WORKOUTSCHEDULER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// WORKOUTSCHEDULER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef WORKOUTSCHEDULER_EXPORTS
#define WORKOUTSCHEDULER_API __declspec(dllexport)
#else
#define WORKOUTSCHEDULER_API __declspec(dllimport)
#endif

#include <string>
// This class is exported from the dll
class WORKOUTSCHEDULER_API CWorkoutScheduler {
public:
	CWorkoutScheduler(void);
	// TODO: add your methods here.

	std::string getWorkout(std::string exercise);
};

extern WORKOUTSCHEDULER_API int nWorkoutScheduler;

WORKOUTSCHEDULER_API int fnWorkoutScheduler(void);
