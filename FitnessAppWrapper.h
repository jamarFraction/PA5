/*******************************************************************************************
* Programmer: Jamar Fraction                                                               *
* Class: CptS 122, Fall  2017; Lab Section 05											   *
* Programming Assignment: PA5															   *
* Date: October 8, 2017                                                                    *
* Description: This program fulfills the requirements for the fifth programming assignment *
********************************************************************************************/
#pragma once
#include "DietPlan.h"
#include "ExercisePlan.h"

#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::fstream;
using std::ifstream;

class FitnessAppWrapper {

private:

	DietPlan weeklyDietPlan;

	ExercisePlan weeklyExercisePlan;

	void displayDailyPlan(ListNode* const &day) const;

	void displayDailyPlanSpecial(ListNode* const &day) const;

	void displayWeeklyPlan(DietPlan const &plan) const;

	void displayWeeklyPlan(ExercisePlan const &plan) const;

	void storeDailyPlan(fstream &filestream, ListNode *&day);

	void storeWeeklyPlan(fstream &filestream, DietPlan const &List);

	void storeWeeklyPlan(fstream &filestream, ExercisePlan const &List);

	void loadDailyPlan(fstream &fileStream, List &list);

	void loadWeeklyPlan(fstream &fileStream, DietPlan &plan);

	void loadWeeklyPlan(fstream &fileStream, ExercisePlan &plan);

	void editDailyDietPlan();

	void editDailyExercisePlan();

	void editDailyPlan_DisplayWeek(ListNode *location);

	void saveDietPlan();

	void saveExercisePlan();
	
public:

	FitnessAppWrapper() {};

	~FitnessAppWrapper() {};

	void displayMenu();

	void runApp(void);

};

