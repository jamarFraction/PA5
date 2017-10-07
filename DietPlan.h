#pragma once
#ifndef DietPlan_h
#define DietPlan_h

#include "List.h"
#include <fstream>

using std::ifstream;
using std::ofstream;

class DietPlan {

private:



public:

	List listOfPlans;

	//Defualt constructor
	DietPlan() {

		//what to put here?

	};

	//Destructor
	~DietPlan() {


	}

	//Copy Constructor
	DietPlan(DietPlan &copyPlan);

	//Create Plan
	void CreatePlan(ifstream &input);

	//MakeNode
	//ListNode* makeNode(string &planName, int &goal, string &date);
};

//non-member
ifstream & operator >> (ifstream &lhs, List &rhs);

ofstream & operator << (ofstream &lhs, ListNode *&rhs);

#endif /* DietPlan_h */
