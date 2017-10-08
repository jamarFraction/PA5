/*******************************************************************************************
* Programmer: Jamar Fraction                                                               *
* Class: CptS 122, Fall  2017; Lab Section 05											   *
* Programming Assignment: PA5															   *
* Date: October 8, 2017                                                                    *
* Description: This program fulfills the requirements for the fifth programming assignment *
********************************************************************************************/
#include "FitnessAppWrapper.h"

int main(int argc, const char * argv[]) {

	//create a new FitnessWrapperApp object
	FitnessAppWrapper currentApplication;

	//run the application calling currentApplication's member function runApp()
	currentApplication.runApp();

	return 0;
}