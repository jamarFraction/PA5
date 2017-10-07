#include "FitnessAppWrapper.h"

int main(int argc, const char * argv[]) {

	//create a new FitnessWrapperApp object
	FitnessAppWrapper currentApplication;

	//run the application calling currentApplication's member function runApp()
	currentApplication.runApp();

	return 0;
}