#pragma once
#include "DietPlan.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;

class FitnessAppWrapper {

private:

	void displayDailyPlan(ListNode* const &day) const;

	DietPlan weeklyDietPlan;

public:

	FitnessAppWrapper() {};

	~FitnessAppWrapper() {};

	
	//required functions
	void loadDailyPlan(ifstream &fileStream, List &list);

	void loadWeeklyPlan(ifstream &fileStream, DietPlan &plan);

	void storeDailyPlan(ofstream &filestream, ListNode *&day);

	void storeWeeklyPlan(ofstream &filestream, DietPlan const &List);

	void displayWeeklyPlan(DietPlan const &plan) const;

	void displayMenu();

	void runApp(void);

};

