#pragma once
#include "ListNode.h"

#include <string>


using std::string;


class List {

private:
	ListNode *pHead;
	ListNode *pTail;

public:

	//Constructors
	//Default constructor.. the head and tail should be null pointers
	List()
	{
		//Pointing head to NULL
		pHead = NULL;

		//Pointing tail to NULL
		pTail = NULL;

	}

	//Deconstructors
	//default desconstructor
	~List() {

		//free the space..
		//is this neccessary?

	}

	//Setters
	//Add function for adding new dates
	void Add(ListNode *newDay);

	//Setter for the head pointer
	void SetHead(ListNode *newDay);

	//Setter for the tail pointer
	void SetTail(ListNode *newDay);

	//Setter for the next day
	void SetNext(ListNode *newDay);

	//Getters
	//getter for pHead
	ListNode* GetHead();

	//getter for pHead
	ListNode* GetTail();

	//getter to retrieve the passed in ListNode's date
	string GetDate(ListNode passedNode);

	//getter to retrieve the passed in ListNode's planName
	string GetPlanName(ListNode passedNode);

	//getter to retrieve the passed in ListNode's goalCalories
	int GetGoalCalories(ListNode passedNode);

	ListNode* makeNode(string planName, int goal, string date);
	ListNode* makeNode();
};

//#endif /* List_h */










//    //getter for the date
//    string GetDate(ListNode passedNode);
//
//    //getter for the plan name
//    string GetPlanName(ListNode passedNode);
//
//    //getter for the goal
//    int GetGoalCalories(ListNode passedNode);

//    struct ListNode{
//
//        string date;
//        string planName;
//        int goalCalories;
//        ListNode *nextDay;
//
//    };





//non-member
//ListNode *makeNode(string planName, int goal, string date);
//ListNode *makeNode();




//class ListNode{
//
//    //declaring what are supposed to be private data members.. we will see
//    private:
//    string date;
//    string planName;
//    int goal;
//    ListNode *nextDay;
//
//    public:
//    //****************************************************************************
//    //****************************************************************************
//    //constructors
//
//    //default
//    ListNode(ListNode *newDay = NULL, string newDate = "", string newPlanName = "", int newGoal = 0);
//
//
//
//    //copy constructor
//    ListNode(ListNode &passedNode){
//
//        //setting the date via the setter functions for the Date, PlanName, and Goal
//        SetDate(passedNode.date);
//        SetPlanName(passedNode.planName);
//        SetGoal(passedNode.goal);
//
//
//    }
//
//    //****************************************************************************
//    //****************************************************************************
//    //destructors
//    ~ListNode(){
//
//        //still have no idea what we're supposed to be putting in here
//        //but I did it!
//
//    }
//    //****************************************************************************
//    //****************************************************************************
//    //Getters
//
//    //getter for the date
//    string GetDate(){
//
//        //return the value of the private data member
//        return date;
//
//    }
//
//
//    //getter for the plan name
//    string GetPlanName(){ return planName; }
//
//
//    //getter for the goal
//    int GetGoal(){ return goal; }
//
//    //****************************************************************************
//    //****************************************************************************
//    //Setters
//
//    //setter for the date
//    void SetDate(string passedDate){
//
//        //set the private variable to the integer passed as an argument
//        date = passedDate;
//
//    }
//
//    //setter for the plan name
//    void SetPlanName(string passedPlanName){ planName = passedPlanName; }
//
//
//    //setter for the goal
//    void SetGoal(int passedGoal){ goal = passedGoal; }
//    //****************************************************************************
//    //****************************************************************************
//};