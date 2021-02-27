#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "team.h"

using namespace std;

const int AR_SIZE = 32;

void inputFn(Team arr[], int size);

//void expandTeams(...) TODO

void stadiumSort(Team arr[], int size);

void locationSort(Team arr[], int size);

void seatingSort(Team arr[], int size);

void conferenceSort(Team arr[], int size);

void divisionSort(Team arr[], int size);

void surfaceTypeSort(Team arr[], int size);

void roofTypeSort(Team arr[], int size);

void dateOpenedSort(Team arr[], int size);


#endif // HEADER_H
