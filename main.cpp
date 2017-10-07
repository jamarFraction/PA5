#include "FitnessAppWrapper.h"
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;

int main(int argc, const char * argv[]) {

	//create a new FitnessWrapperApp object
	FitnessAppWrapper currentApplication;

	//run the application calling currentApplication's member function runApp()
	currentApplication.runApp();

	return 0;
}


// List newList;

//    DietPlan newPlan;
//
//    ListNode *newNode = makeNode("Week 1", 1000, "10/20/2017");
//
//    ListNode *newNode2 = makeNode("Week 1", 2000, "10/21/2017");
//
//    ListNode *newNode3 = makeNode("Week 1", 2000, "10/22/2017");
//
//    newPlan.Add(newNode);
//
//    newPlan.Add(newNode2);
//
//    newPlan.Add(newNode3);



//newPlan.Add(*makeNode("Week 1", 1000, "10/20/2017"));


//newPlan.Add(*makeNode("Week 1", 2000, "10/21/2017"));


//    newList.Add(*makeNode("Week 1", 1000, "10/20/2017"));
//
//    newList.Add(*makeNode("Week 1", 1000, "10/21/2017"));





//newList.Add(*newNode);

// system("pause");


//List newList();

//



//    string date = newNode.GetDate();
//    
//    int newGoal = newNode.GetGoal();