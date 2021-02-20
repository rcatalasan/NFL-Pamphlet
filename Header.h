#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>


using namespace std;

const int AR_SIZE = 32;

struct Team 
{
    string teamName;
    string stadiumName;
    string seatingCapacity;
    string location;
    string conference;
    string division;
    string surfaceType;
    string stadiumRoofType;
    int dateOpened;
};


void inputFn(Team arr[], int size);

void stadiumSort(Team arr[], int size);

void locationSort(Team arr[], int size);

void seatingSort(Team arr[], int size);

void conferenceSort(Team arr[], int size);

void divisionSort(Team arr[], int size);

void surfaceTypeSort(Team arr[], int size);

void roofTypeSort(Team arr[], int size);

void dateOpenedSort(Team arr[], int size);