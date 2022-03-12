// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DIETSCHEDULER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DIETSCHEDULER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DIETSCHEDULER_EXPORTS
#define DIETSCHEDULER_API __declspec(dllexport)
#else
#define DIETSCHEDULER_API __declspec(dllimport)
#endif

#include <string>
// This class is exported from the dll
class DIETSCHEDULER_API CDietScheduler {
public:
	CDietScheduler(void);
	// TODO: add your methods here.

	std::string getWhatToEat(std::string food);
};

extern DIETSCHEDULER_API int nDietScheduler;

DIETSCHEDULER_API int fnDietScheduler(void);
