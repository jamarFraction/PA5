#include "FitnessAppWrapper.h"

void FitnessAppWrapper::runApp(void) {


	//DisplayMenu function that controls the progression through the app
	//If the exit option is selected --> exit
	displayMenu();

	
}

void FitnessAppWrapper::loadDailyPlan(ifstream &fileStream, List &list) {

	//Daily plan read-in.
	//Overloaded >> operator defined within DietPlan
	fileStream >> list;

}

void FitnessAppWrapper::loadWeeklyPlan(ifstream &fileStream, DietPlan &plan) {

	//Pass the plan parameter to the loadDailyPlan as long as there still
	//contains information within the fileStream
	while (fileStream) {

		loadDailyPlan(fileStream, plan.listOfPlans);

	}


}

void FitnessAppWrapper::displayDailyPlan(ListNode* const &day) const {

	//Format for display:
	//Plan Name:
	//Goal Calories:
	//Date:
	cout << "Plan Name: " << day->GetPlanName() << "\nGoal Calories: " << day->GetGoalCalories() <<
		"\nDate: " << day->GetDate() << "\n" << endl;

}

void FitnessAppWrapper::displayWeeklyPlan(DietPlan const &plan) const {

	system("cls");

	//ListNode pointer to keep track of our location in the linked list
	ListNode *location = plan.listOfPlans.GetHead();

	while (location != NULL) {

		//pass the current pointer to the displayDailyPlan function to print out the day
		displayDailyPlan(location);

		//advance the pointer
		location = location->GetNext();

	}
}

void FitnessAppWrapper::storeDailyPlan(ofstream &filestream, ListNode *&day){

	//overloaded << operator for writing to a file
	filestream << day;

}

void FitnessAppWrapper::storeWeeklyPlan(ofstream &filestream, DietPlan const &plan) {

	system("cls");

	ListNode *location = plan.listOfPlans.GetHead();

	while (location != NULL) {

		//pass the current pointer to the storeDailyPlan function to store to dile the current day
		storeDailyPlan(filestream, location);

		//advance the pointer
		location = location->GetNext();

	}

	system("pause");
}

void FitnessAppWrapper::displayMenu() {

	//Menu option worker variable
	int option = 0;

	do {

		//Clear the screen
		system("cls");

		cout << "1. Load weekly diet plan from file.\n2. Load weekly exercise plan from file.\n3. Store weekly diet plan to file.\n" <<
			"4. Store weekly exercise plan to file.\n5. Display weekly diet plan to screen.\n6. Display weekly exercise plan to screen.\n" <<
			"7. Edit daily diet plan.\n8. Edit daily exercise plan.\n9. Exit.   // Note: this must write the most recent weekly plans to the corresponding files." << endl;

		cin >> option;

		if (option == 1) {

			//Start weekly plan read-in
			ifstream input("dietPlans.txt");

			if (input.is_open()){ // were we successful in opening the stream?
			

				loadWeeklyPlan(input, weeklyDietPlan);
				//Send the stream to the processor function
				//this will write information from the stream to the list in the DietPlan
				//weeklyDietPlan.CreatePlan(input);

				input.close();
				cout << "Diet Plan read in successfully" << endl;
				system("pause");

			}//end read in file successfully 
			else {
				//Error reading in the file
				//Clear the screen
				system("cls");

				//Display Error message
				cout << "Error reading in file" << endl;
				system("pause");

			}//end file read-in error
		}//End load Diet Plan
		else if (option == 2) {

		}
		else if (option == 3) {

			//start DietPlan writing by opening the file for writing 
			ofstream outfile("dietPlans.txt");

			if (outfile.is_open()) { // were we successful in opening the stream?

				//send to writing function
				storeWeeklyPlan(outfile, weeklyDietPlan);

				outfile.close();
				cout << "Diet Plan written successfully" << endl;
				system("pause");

			}//end read in file successfully 
			else {
				//Error opening the file
				//Clear the screen
				system("cls");

				//Display Error message
				cout << "Error opening the file" << endl;
				system("pause");

			}//end file write error

		}
		else if (option == 5) {

			//Pass our DietPlan to the weekly display function
			displayWeeklyPlan(weeklyDietPlan);
			system("pause");
		}

	} while (option != 9);
			

}