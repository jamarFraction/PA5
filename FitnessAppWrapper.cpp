#include "FitnessAppWrapper.h"
FitnessAppWrapper::FitnessAppWrapper()
{
}


FitnessAppWrapper::~FitnessAppWrapper()
{
}
#include "FitnessAppWrapper.h"

void FitnessAppWrapper::runApp(void) {

	//Menu option worker variable
	int option = 0;

	do {

		cout << "MENU\n1. Read in Diet Plan\n2. Oh, Don't be a jerk and press 2\n3. Exit" << endl;
		cin >> option;

		if (option == 1) {

			//Start weekly plan read-in
			ifstream input("dietPlans.txt");

			if (input.is_open()) // were we successful in opening the stream?
			{

				//Send the stream to the processor function
				//this will write information from the stream to the list in the DietPlan
				weeklyDietPlan.CreatePlan(input);

				cout << "all done." << endl;

			}


		}
		else if (option == 2) {

		}




	} while (option != 3);


}