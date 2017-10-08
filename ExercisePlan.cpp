/*******************************************************************************************
* Programmer: Jamar Fraction                                                               *
* Class: CptS 122, Fall  2017; Lab Section 05											   *
* Programming Assignment: PA5															   *
* Date: October 8, 2017                                                                    *
* Description: This program fulfills the requirements for the fifth programming assignment *
********************************************************************************************/
#include "ExercisePlan.h"

//Copy Contructor
ExercisePlan::ExercisePlan(ExercisePlan &copyPlan) {

	//copy over the list.. by value?
	listOfPlans = copyPlan.listOfPlans;

}

void ExercisePlan::CreatePlan(ifstream &input) {

	//overloaded stream operator
	//will read all plans from the input stream
	input >> listOfPlans;

}