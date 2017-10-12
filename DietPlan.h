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

class DietPlan {

private:



public:

	List listOfPlans;

	//Defualt constructor
	DietPlan() {

		//what to put here?
		//pretty sure I don't have to include anything here because this DietPlan class will call on the 
		//List class' constructor

	};

	//Destructor
	~DietPlan() {


	}

	//Copy Constructor
	DietPlan(DietPlan const &copyPlan);

	//Create Plan
	void CreatePlan(fstream &input);

};

//non-member
fstream & operator >> (fstream &lhs, List &rhs);

fstream & operator << (fstream &lhs, ListNode *&rhs);

#endif /* DietPlan_h */
