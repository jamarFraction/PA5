#pragma once
#include "DietPlan.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;

class FitnessAppWrapper {

private:

public:

	FitnessAppWrapper() {};

	~FitnessAppWrapper() {};

	DietPlan weeklyDietPlan;


	//required functions
	void runApp(void);

};

