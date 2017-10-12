/*******************************************************************************************
* Programmer: Jamar Fraction                                                               *
* Class: CptS 122, Fall  2017; Lab Section 05											   *
* Programming Assignment: PA5															   *
* Date: October 8, 2017                                                                    *
* Description: This program fulfills the requirements for the fifth programming assignment *
********************************************************************************************/
#pragma once
#ifndef ListNode_h
#define ListNode_h

#include <string>

using std::string;


class ListNode {

private:

	string date;
	string planName;
	int goalCaloriesOrSteps;
	ListNode *nextDay;

public:

	ListNode();

	//default constructor
	ListNode(string date, string planName, int goalCaloriesOrSteps);

	//default destructor
	~ListNode() {

	}

	//getter for the date
	string GetDate() const;

	//getter for the plan name
	string GetPlanName() const;

	//getter for the goal
	int GetGoalCaloriesOrSteps() const;

	//getter for the next Node in the list
	ListNode *GetNext() const;

	//setter for the next Node in the list
	void SetNext(ListNode *next);

	//setter for the date
	void setDate(string date);

	//setter for the planName
	void setPlanName(string plan);

	//setter for the goalCaloriesOrSteps
	void setGoalCaloriesOrSteps(int goal);

};


#endif /* ListNode_h */