#include "DietPlan.h"

//Copy Contructor
DietPlan::DietPlan(DietPlan &copyPlan) {

	//copy over the list.. by value?
	listOfPlans = copyPlan.listOfPlans;

}

void DietPlan::CreatePlan(ifstream &input) {

	//overloaded stream operator
	//will read all plans from the input stream
	input >> listOfPlans;

}

ifstream & operator >> (ifstream &lhs, List &rhs) {


	while (lhs) {

		string planName = "";
		int goalCalories = 0;
		string date = "";
		string blah = "";

		ListNode *newDay;

		//Plan name
		std::getline(lhs, planName);

		//Goal Calories
		lhs >> goalCalories;

		//Date
		lhs >> date;

		//ignore the newline character after the date
		lhs.ignore(1024, '\n');

		//get the bank line
		std::getline(lhs, blah);

		//send our values to the Node maker function
		//newDay = this.makeNode(planName, goalCalories, date);
		newDay = rhs.makeNode(planName, goalCalories, date);


		//add the newly created Node to the List of daily plans
		rhs.Add(newDay);

		// lhs.ignore(std::numeric_limits<std::streamsize>::max(), '\n' );

		//std::getline(lhs, date);

		// lhs >> blah;
	}

	//return the stream
	return lhs;
}


//void DietPlan::Add(ListNode *newDay){
//
//    //Adding to an empty list
//    if(listOfPlans.GetHead() == NULL && listOfPlans.GetTail() == NULL){
//
//        //point the head pointer to the address of the passed in ListNode
//        listOfPlans.SetHead(newDay);
//
//        //point the tail pointer to the address of the passed in ListNode
//        listOfPlans.SetTail(newDay);
//
//    }else{
//        //adding to non-empty list
//        //inset at pTail
//
//        //set the current pTail's pNext to the passed in ListNode
//        listOfPlans.SetNext(newDay);
//
//        //point pTail to the passed in ListNode
//        listOfPlans.SetTail(newDay);
//
//    }
//
//}



//Non-Member functions
//ListNode* DietPlan::makeNode(string &planName, int &goal, string &date){
//
//    //declare and allocate space for a new ListNode
//    ListNode *newNode = NULL;
//
//    //initialize the values of the new ListNode to the passed in ListNode values
//    //newNode = planName;
//    newNode->setPlanName(planName);
//    newNode->setGoalCalories(goal);
//    newNode->setDate(date);
//
//
//    //return the new ListNode
//    return newNode;
//}

//ListNode *makeNode(){
//
//    //declare and allocate space for a new ListNode
//    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
//
//    //initialize the values of the new ListNode to the deafault values
//    newNode->date = "";
//    newNode->goalCalories = 0;
//    newNode->planName = "";
//    newNode->nextDay = NULL;
//
//    //return the new ListNode
//    return newNode;
//
//}