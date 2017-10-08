/*******************************************************************************************
* Programmer: Jamar Fraction                                                               *
* Class: CptS 122, Fall  2017; Lab Section 05											   *
* Programming Assignment: PA5															   *
* Date: October 8, 2017                                                                    *
* Description: This program fulfills the requirements for the fifth programming assignment *
********************************************************************************************/
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

};

//non-member
ifstream & operator >> (ifstream &lhs, List &rhs);

ofstream & operator << (ofstream &lhs, ListNode *&rhs);

#endif /* DietPlan_h */
