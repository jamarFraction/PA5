/*******************************************************************************************
* Programmer: Jamar Fraction                                                               *
* Class: CptS 122, Fall  2017; Lab Section 05											   *
* Programming Assignment: PA5															   *
* Date: October 8, 2017                                                                    *
* Description: This program fulfills the requirements for the fifth programming assignment *
********************************************************************************************/
#pragma once
#include "ListNode.h"

#include <string>

using std::string;


class List {

private:
	ListNode *pHead;
	ListNode *pTail;

public:

	//Constructors
	//Default constructor.. the head and tail should be null pointers
	List()
	{
		//Pointing head to NULL
		pHead = NULL;

		//Pointing tail to NULL
		pTail = NULL;

	}

	//Deconstructors
	//default desconstructor
	~List() {

		//free the space..
		//is this neccessary?

	}

	//Setters
	//Add function for adding new dates
	void Add(ListNode *newDay);

	//Setter for the head pointer
	void SetHead(ListNode *newDay);

	//Setter for the tail pointer
	void SetTail(ListNode *newDay);

	//Getters
	//getter for pHead
	ListNode* GetHead() const;

	//getter for pHead
	ListNode* GetTail();

	//getter to retrieve the passed in ListNode's date
	string GetDate(ListNode passedNode);

	//getter to retrieve the passed in ListNode's planName
	string GetPlanName(ListNode passedNode);

	//getter to retrieve the passed in ListNode's goalCaloriesOrSteps
	int GetGoalCaloriesOrSteps(ListNode passedNode);

	ListNode* makeNode(string planName, int goal, string date);
	ListNode* makeNode();
};