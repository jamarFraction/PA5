#include "DietPlan.h"

//Copy Contructor
DietPlan::DietPlan(DietPlan &copyPlan) {

	//copy over the list.. by value?
	listOfPlans = copyPlan.listOfPlans;

}

void DietPlan::CreatePlan(ifstream &input) {

	//overloaded stream operator
	//will read all plans from the input stream
	input >> listOfPlans;

}

ifstream & operator >> (ifstream &lhs, List &rhs) {


	//while (lhs) {

		string planName = "";
		int goalCalories = 0;
		string date = "";
		string blah = "";

		ListNode *newDay = NULL;

		//Plan name
		std::getline(lhs, planName);

		//Goal Calories
		lhs >> goalCalories;

		//Date
		lhs >> date;

		//ignore the newline character after the date
		lhs.ignore(1024, '\n');

		//get the bank line
		std::getline(lhs, blah);

		//send our values to the Node maker function
		//newDay = this.makeNode(planName, goalCalories, date);
		newDay = rhs.makeNode(planName, goalCalories, date);

		//add the newly created Node to the List of daily plans
		rhs.Add(newDay);

	//return the stream
	return lhs;
}

ofstream & operator << (ofstream &lhs, ListNode *&rhs) {

	if (rhs->GetNext() != NULL) {
		//normal line writing
		lhs << rhs->GetPlanName() << "\n" << rhs->GetGoalCalories() << "\n" << rhs->GetDate() << "\n\n";
	}
	else {
		//writing the last plan with no extra line
		//keeps data consistent and makes so there is not an extra Node at the end of the list with no data
		//that occurs when when there are empty lines at the end of the file
		lhs << rhs->GetPlanName() << "\n" << rhs->GetGoalCalories() << "\n" << rhs->GetDate();
	}
	
	return lhs;

}