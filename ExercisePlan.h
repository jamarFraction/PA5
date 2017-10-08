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

//non-member
ifstream & operator >> (ifstream &lhs, List &rhs);

ofstream & operator << (ofstream &lhs, ListNode *&rhs);

#endif /* DietPlan_h */
