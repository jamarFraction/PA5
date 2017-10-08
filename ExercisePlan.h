/*******************************************************************************************
* Programmer: Jamar Fraction                                                               *
* Class: CptS 122, Fall  2017; Lab Section 05											   *
* Programming Assignment: PA5															   *
* Date: October 8, 2017                                                                    *
* Description: This program fulfills the requirements for the fifth programming assignment *
********************************************************************************************/
#pragma once
#ifndef ExercisePlan_h
#define ExercisePlan_h

#include "List.h"
#include <fstream>

using std::ifstream;
using std::ofstream;

class ExercisePlan {

private:



public:

	List listOfPlans;

	//Defualt constructor
	ExercisePlan() {

		//what to put here?

	};

	//Destructor
	~ExercisePlan() {


	}

	//Copy Constructor
	ExercisePlan(ExercisePlan &copyPlan);

	//Create Plan
	void CreatePlan(ifstream &input);

	//MakeNode
	//ListNode* makeNode(string &planName, int &goal, string &date);
};

#endif /* DietPlan_h */
