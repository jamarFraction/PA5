#include "List.h"

//Getters
//getter for pHead
ListNode* List::GetHead() {

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

int List::GetGoalCalories(ListNode passedNode) {

	//return the value of the private data member
	return passedNode.GetGoalCalories();
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
	newNode->setGoalCalories(goal);
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
//void List::Add(ListNode newDay){
//    
//    //Adding to an empty list
//    if(pHead == NULL && pTail == NULL){
//        
//        //point the head pointer to the address of the passed in ListNode
//        pHead = &newDay;
//        
//        //point the tail pointer to the address of the passed in ListNode
//        pTail = &newDay;
//        
//    }else{
//        //adding to non-empty list
//        //inset at pTail
//        
//        //set the current pTail's pNext to the passed in ListNode
//        pTail->nextDay = &newDay;
//        
//        //point pTail to the passed in ListNode
//        pTail = &newDay;
//        
//    }
//    
//}

////Non-Member functions
//ListNode *makeNode(string planName, int goal, string date){
//
//    //declare and allocate space for a new ListNode
//    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
//
//    //initialize the values of the new ListNode to the passed in ListNode values
//    newNode->planName = planName;
//    newNode->goal = goal;
//    newNode->date = date;
//    newNode->nextDay = NULL;
//
//    //return the new ListNode
//    return newNode;
//}
//
//ListNode *makeNode(){
//
//    //declare and allocate space for a new ListNode
//    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
//
//    //initialize the values of the new ListNode to the deafault values
//    newNode->date = "";
//    newNode->goal = 0;
//    newNode->planName = "";
//    newNode->nextDay = NULL;
//
//    //return the new ListNode
//    return newNode;
//
//}