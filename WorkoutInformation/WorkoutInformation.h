// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the WORKOUTINFORMATION_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// WORKOUTINFORMATION_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef WORKOUTINFORMATION_EXPORTS
#define WORKOUTINFORMATION_API __declspec(dllexport)
#else
#define WORKOUTINFORMATION_API __declspec(dllimport)
#endif

#include <string>

// This class is exported from the dll
class WORKOUTINFORMATION_API CWorkoutInformation {
public:
	CWorkoutInformation(void);
	// TODO: add your methods here.

	std::string getBench();
};

extern WORKOUTINFORMATION_API int nWorkoutInformation;

WORKOUTINFORMATION_API int fnWorkoutInformation(void);
