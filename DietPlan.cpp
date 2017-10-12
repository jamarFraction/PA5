/*******************************************************************************************
* Programmer: Jamar Fraction                                                               *
* Class: CptS 122, Fall  2017; Lab Section 05											   *
* Programming Assignment: PA5															   *
* Date: October 8, 2017                                                                    *
* Description: This program fulfills the requirements for the fifth programming assignment *
********************************************************************************************/
#include "DietPlan.h"

//Copy Contructor
DietPlan::DietPlan(DietPlan const &copyPlan) {

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

void DietPlan::CreatePlan(fstream &input) {

	//overloaded stream operator
	//will read all plans from the input stream
	input >> listOfPlans;

}

fstream & operator >> (fstream &lhs, List &rhs) {


	//while (lhs) {

		string planName = "";
		int goalCaloriesOrSteps = 0;
		string date = "";
		string blah = "";

		ListNode *newDay = NULL;

		//Plan name
		std::getline(lhs, planName);

		//Goal Calories
		lhs >> goalCaloriesOrSteps;

		//Date
		lhs >> date;

		//ignore the newline character after the date
		lhs.ignore(1024, '\n');

		//get the bank line
		std::getline(lhs, blah);

		//send our values to the Node maker function
		//newDay = this.makeNode(planName, goalCaloriesOrSteps, date);
		newDay = rhs.makeNode(planName, goalCaloriesOrSteps, date);

		//add the newly created Node to the List of daily plans
		rhs.Add(newDay);

	//return the stream
	return lhs;
}

fstream & operator << (fstream &lhs, ListNode *&rhs) {

	if (rhs->GetNext() != NULL) {
		//normal line writing
		lhs << rhs->GetPlanName() << "\n" << rhs->GetGoalCaloriesOrSteps() << "\n" << rhs->GetDate() << "\n\n";
	}
	else {
		//writing the last plan with no extra line
		//keeps data consistent and makes so there is not an extra Node at the end of the list with no data
		//that occurs when when there are empty lines at the end of the file
		lhs << rhs->GetPlanName() << "\n" << rhs->GetGoalCaloriesOrSteps() << "\n" << rhs->GetDate();
	}
	
	return lhs;

}