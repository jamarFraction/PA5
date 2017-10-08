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