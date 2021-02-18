#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Team {
    string teamName;
    string stadiumName;
    string seatingCapacity;
    string location;
    string conference;
    string division;
    string surfaceType;
    string stadiumRoofType;
    string dateOpened;
};

struct Node
{
    Team data;
    struct Node* next;
    struct Node* prev;
};

void readFile(Node** node);
void Enqueue(Node** head_ref, Team t);
void displayList(Node* n);

#endif /* LINKEDLIST_H_ */
