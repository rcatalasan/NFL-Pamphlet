#include "readFile.h"

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

    // input stream (repeat as necessary with a for loop [not implemented])
        getline(inFile, teamName, ',');	// team name
        getline(inFile, stadiumName, ',');	// stadium name

        inFile.ignore();
        getline(inFile, seatingCapacity, '"');	// seating cap
        inFile.ignore();

        inFile.ignore();
        getline(inFile, location, '"');	// location
        inFile.ignore();

        getline(inFile, conference, ',');	// conference
        getline(inFile, division, ',');	// division
        getline(inFile, surfaceType, ',');	// surface type
        getline(inFile, stadiumRoofType, ',');	// stadium roof
        getline(inFile, dateOpened);	// date

        getline(inFile, next);

    inFile.close();

    cout << teamName;
    cout << endl;
    cout << stadiumName;
    cout << endl;
    cout << seatingCapacity;
    cout << endl;
    cout << location;
    cout << endl;
    cout << conference;
    cout << endl;
    cout << division;
    cout << endl;
    cout << surfaceType;
    cout << endl;
    cout << stadiumRoofType;
    cout << endl;
    cout << dateOpened;
    cout << endl;
    cout << next;
}
