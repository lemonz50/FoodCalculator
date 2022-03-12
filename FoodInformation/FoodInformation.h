// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the FOODINFORMATION_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// FOODINFORMATION_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef FOODINFORMATION_EXPORTS
#define FOODINFORMATION_API __declspec(dllexport)
#else
#define FOODINFORMATION_API __declspec(dllimport)
#endif

#include <string>
// This class is exported from the dll
class FOODINFORMATION_API CFoodInformation {
public:
	CFoodInformation(void);
	// TODO: add your methods here.

	std::string getApple();
};

extern FOODINFORMATION_API int nFoodInformation;

FOODINFORMATION_API int fnFoodInformation(void);
