#pragma once
#include "DietPlan.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;

class FitnessAppWrapper {

private:

	DietPlan weeklyDietPlan;

	void displayDailyPlan(ListNode* const &day) const;

	void displayWeeklyPlan(DietPlan const &plan) const;

	void storeDailyPlan(ofstream &filestream, ListNode *&day);

	void storeWeeklyPlan(ofstream &filestream, DietPlan const &List);

	void loadDailyPlan(ifstream &fileStream, List &list);

	void loadWeeklyPlan(ifstream &fileStream, DietPlan &plan);

	void editDailyPlan();

	void editDailyPlan_DisplayWeek(ListNode *location);
	
public:

	FitnessAppWrapper() {};

	~FitnessAppWrapper() {};

	void displayMenu();

	void runApp(void);

};

