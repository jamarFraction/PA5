#include "ListNode.h"

ListNode::ListNode(string date, string planName, int goalCalories)
{
	//set the default values of the listNode to the values passed into the function
	//Date
	setDate(date);

	//PlanName
	setPlanName(planName);

	//GoalCalories
	setGoalCalories(goalCalories);

	//Next Day pointer.. NULL suits best for insertion.. saves a step
	nextDay = NULL;
}

ListNode::ListNode()
{

	//set the default values of the ListNode to for the most part.. nothing 
	//Date
	setDate("");

	//PlanName
	setPlanName("");

	//GoalCalories
	setGoalCalories(-1);

	//Next Day pointer.. NULL suits best for insertion.. saves a step
	nextDay = NULL;

}

//getter for the date
string ListNode::GetDate() {

	return date;
}

//getter for the plan name
string ListNode::GetPlanName() {

	return planName;

}

//getter for the goal
int ListNode::GetGoalCalories() {

	return goalCalories;
}

//setter for the next Node
void ListNode::SetNext(ListNode *next) {

	//doing the assignment of this' nextDay to the passed in node pointer
	nextDay = next;

}

void ListNode::setDate(string passedDate) {

	//assign the value of date to the passed in string
	date = passedDate;

}

void ListNode::setPlanName(string plan)
{

	planName = plan;

}

void ListNode::setGoalCalories(int goal) {

	goalCalories = goal;

}