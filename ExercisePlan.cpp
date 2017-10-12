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

	//copy over the list.. by reference

	//Deep copy start
	ListNode *location = copyPlan.listOfPlans.GetHead();

	while (location != nullptr) {

		//Create a node with all of the same information as whats in the location node
		//and Add it with the Add function I wrote in the List class
		listOfPlans.Add(listOfPlans.makeNode(copyPlan.listOfPlans.GetPlanName(*location), copyPlan.listOfPlans.GetGoalCaloriesOrSteps(*location),
			copyPlan.listOfPlans.GetDate(*location)));

		//update where location points to
		location = location->GetNext();

	}

}

void ExercisePlan::CreatePlan(fstream &input) {

	//overloaded stream operator
	//will read all plans from the input stream
	input >> listOfPlans;

}