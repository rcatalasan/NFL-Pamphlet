#include "linkedList.h"


void readFile(Node** node)
{
    Team temp;
    ifstream inFile;
    string discard;
    string teamName, stadiumName, seatingCapacity, location, conference, division, surfaceType, stadiumRoofType, dateOpened;
    string next;

    inFile.open("NFL_Information.csv");

    // discards header information
        getline(inFile, discard);
        while(inFile)
        {
    // input stream (repeat as necessary with a while loop [not implemented])
        getline(inFile, teamName, ',');	// team name
        temp.teamName = teamName;
        getline(inFile, stadiumName, ',');	// stadium name
        temp.stadiumName = stadiumName;
        getline(inFile, seatingCapacity, ',');	// seating cap
        temp.seatingCapacity = seatingCapacity;
        inFile.ignore();
        getline(inFile, location, '"');	// location
        temp.location = location;
        inFile.ignore();
        getline(inFile, conference, ',');	// conference
        temp.conference = conference;
        getline(inFile, division, ',');	// division
        temp.division = division;
        getline(inFile, surfaceType, ',');	// surface type
        temp.surfaceType = surfaceType;
        getline(inFile, stadiumRoofType, ',');	// stadium roof
        temp.stadiumRoofType = stadiumRoofType;
        getline(inFile, dateOpened);	// date
        temp.dateOpened = dateOpened;
        // Add to linked list:
        Enqueue(node, temp);
        }
    inFile.close();
}


void Enqueue(Node** head_ref, Team t)
{
    Node* node = new Node(); // adds new node
    Node* tail = *head_ref;
    node->data = t; // sets the data of new node equal to the data
    node->next = NULL;
    node->prev = NULL;
    if(*head_ref == NULL)
    {
        *head_ref = node;
        return;
    }
    while(tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = node;
}

void displayList(Node* n)
{
    n = n->next;
    while(n != NULL)
    {
        cout << n->data.location;
        cout << endl;
        n = n->next;
    }
}
