#include "readFile.h"
#include<QDebug>

using namespace std;

void readFile()
{
    ifstream inFile;

    string discard;

    const int TEAMNUM = 32;

    string teamName;
    string stadiumName;
    string seatingCapacity;
    string location;
    string conference;
    string division;
    string surfaceType;
    string stadiumRoofType;
    string dateOpened;

    string next;

    inFile.open("NFL_Information.csv");

    // discards header information
        getline(inFile, discard);
        while(inFile.good())
        {
    // input stream (repeat as necessary with a while loop [not implemented])
        getline(inFile, teamName, ',');	// team name
        getline(inFile, stadiumName, ',');	// stadium name

        inFile.ignore();
        getline(inFile, seatingCapacity, ',');	// seating cap
        inFile.ignore();

        inFile.ignore();
        getline(inFile, location, '"');	// location
        inFile.ignore();

        getline(inFile, conference, ',');	// conference
        getline(inFile, division, ',');	// division
        getline(inFile, surfaceType, ',');	// surface type
        getline(inFile, stadiumRoofType, ',');	// stadium roof
        getline(inFile, dateOpened);	// date
        cout << teamName;
        cout << " ";
        cout << stadiumName;
        cout << " ";
        cout << seatingCapacity;
        cout << " ";
        cout << location;
        cout << " ";
        cout << conference;
        cout << " ";
        cout << division;
        cout << " ";
        cout << surfaceType;
        cout << " ";
        cout << stadiumRoofType;
        cout << " ";
        cout << dateOpened;
        cout << endl;
        }
    inFile.close();
}
