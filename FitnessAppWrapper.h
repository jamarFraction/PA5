#pragma once
#include "DietPlan.h"
#include "ExercisePlan.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;

class FitnessAppWrapper {

private:

	DietPlan weeklyDietPlan;

	ExercisePlan weeklyExercisePlan;

	void displayDailyPlan(ListNode* const &day) const;

	void displayDailyPlanSpecial(ListNode* const &day) const;

	void displayWeeklyPlan(DietPlan const &plan) const;

	void displayWeeklyPlan(ExercisePlan const &plan) const;

	void storeDailyPlan(ofstream &filestream, ListNode *&day);

	void storeWeeklyPlan(ofstream &filestream, DietPlan const &List);

	void storeWeeklyPlan(ofstream &filestream, ExercisePlan const &List);

	void loadDailyPlan(ifstream &fileStream, List &list);

	void loadWeeklyPlan(ifstream &fileStream, DietPlan &plan);

	void loadWeeklyPlan(ifstream &fileStream, ExercisePlan &plan);

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

