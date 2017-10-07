#pragma once
#ifndef ListNode_h
#define ListNode_h

#include <string>

using std::string;


class ListNode {

private:

	string date;
	string planName;
	int goalCalories;
	ListNode *nextDay;

public:

	ListNode();

	//default constructor
	ListNode(string date, string planName, int goalCalories);

	//default destructor
	~ListNode() {

	}

	//getter for the date
	string GetDate();

	//getter for the plan name
	string GetPlanName();

	//getter for the goal
	int GetGoalCalories();

	//getter for the next Node in the list
	ListNode *GetNext();

	//setter for the next Node in the list
	void SetNext(ListNode *next);

	//setter for the date
	void setDate(string date);

	//setter for the planName
	void setPlanName(string plan);

	//setter for the goalCalories
	void setGoalCalories(int goal);

};


#endif /* ListNode_h */