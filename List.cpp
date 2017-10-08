#include "List.h"

//Getters
//getter for pHead
ListNode* List::GetHead() const{

	return pHead;

}

//getter for pHead
ListNode* List::GetTail() {

	return pTail;

}


string List::GetDate(ListNode passedNode) {

	//return the value of the private data member
	return passedNode.GetDate();

}

string List::GetPlanName(ListNode passedNode) {

	//return the value of the private data member
	return passedNode.GetPlanName();

}

int List::GetGoalCaloriesOrSteps(ListNode passedNode) {

	//return the value of the private data member
	return passedNode.GetGoalCaloriesOrSteps();
}

//Setters
//setter for the head node
void List::SetHead(ListNode *newDay) {

	pHead = newDay;

}

//setter for the tail node
void List::SetTail(ListNode *newDay) {

	pTail = newDay;

}

//Setter for the next day

void List::Add(ListNode *newDay) {

	//Adding to an empty list
	if (pHead == NULL && pTail == NULL) {

		//point the head pointer to the address of the passed in ListNode
		SetHead(newDay);


		//point the tail pointer to the address of the passed in ListNode
		SetTail(newDay);

	}
	else {
		//adding to non-empty list
		//inset at pTail

		//set the current pTail's pNext to the passed in ListNode

		pTail->SetNext(newDay);

		//point pTail to the passed in ListNode
		SetTail(newDay);

	}

}

//Non-Member functions
ListNode* List::makeNode(string planName, int goal, string date) {

	//declare and allocate space for a new ListNode
	ListNode *newNode = new ListNode;// = (ListNode*)malloc(sizeof(ListNode));

	//initialize the values of the new ListNode to the passed in ListNode values
	//newNode = planName;
	newNode->setPlanName(planName);
	newNode->setGoalCaloriesOrSteps(goal);
	newNode->setDate(date);


	//return the new ListNode
	return newNode;
}

ListNode* List::makeNode() {

	//declare and allocate space for a new ListNode
	ListNode *newNode = new ListNode;

	//return the new ListNode
	return newNode;
}