#include "header.h"


void inputFn(Team arr[], int size)
{
	// declaring ifstram variable to handle input file
	ifstream inFile;

	// opening input file
	inFile.open("NFL.txt");
	std::string temp;

	int index = 0;			// PROC - loop control variable and array traversal

	// loop that traverses the array
	while (inFile && index < size)
	{
		// populating the array with user input
		getline(inFile, temp);
		if(temp == "Expansion") break; // if the read line says EXPANSION, then stop reading from the file
		else arr[index].changeTeamName(temp);
		getline(inFile, temp); arr[index].changeStadiumName(temp);
		getline(inFile, temp); arr[index].changeSeatingCapacity(temp);
		getline(inFile, temp); arr[index].changeLocation(temp);
		getline(inFile, temp); arr[index].changeConference(temp);
		getline(inFile, temp); arr[index].changeDivision(temp);
		getline(inFile, temp); arr[index].changeSurfaceType(temp);
		getline(inFile, temp); arr[index].changeStadiumRoofType(temp);
		//getline(inFile, arr[index].dateOpened);
		getline(inFile, temp); arr[index].changeDateOpened(stoi(temp));
		index++;
	}
	// closes input file
	inFile.close();
}


// Performing insertion sort on the stadiumName Struct Member
void stadiumSort(Team arr[], int size)
{
	Team tempArr[AR_SIZE];
	int j;

	for (int i = 1; i < size; ++i)
	{
		tempArr[i] = arr[i];

		j = i - 1;

		while (j >= 0 && arr[j].getStadiumName() > tempArr[i].getStadiumName())
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = tempArr[i];

	}
}



void seatingSort(Team arr[], int size)
{
	Team tempArr[AR_SIZE];
	int j;

	for (int i = 1; i < size; ++i)
	{
		tempArr[i] = arr[i];

		j = i - 1;

		while (j >= 0 && arr[j].getSeatingCapacity() < tempArr[i].getSeatingCapacity())
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = tempArr[i];

	}
}



void locationSort(Team arr[], int size)
{
	Team tempArr[AR_SIZE];
	int j;

	for (int i = 1; i < size; ++i)
	{
		tempArr[i] = arr[i];

		j = i - 1;

		while (j >= 0 && arr[j].getLocation() > tempArr[i].getLocation())
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = tempArr[i];

	}
}



void conferenceSort(Team arr[], int size)
{
	Team tempArr[AR_SIZE];
	int j;

	for (int i = 1; i < size; ++i)
	{
		tempArr[i] = arr[i];

		j = i - 1;

		while (j >= 0 && arr[j].getConference() > tempArr[i].getConference())
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = tempArr[i];

	}
}


void divisionSort(Team arr[], int size)
{
	Team tempArr[AR_SIZE];
	int j;

	for (int i = 1; i < size; ++i)
	{
		tempArr[i] = arr[i];

		j = i - 1;

		while (j >= 0 && arr[j].getDivision() > tempArr[i].getDivision())
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = tempArr[i];

	}
}



void surfaceTypeSort(Team arr[], int size)
{
	Team tempArr[AR_SIZE];
	int j;

	for (int i = 1; i < size; ++i)
	{
		tempArr[i] = arr[i];

		j = i - 1;

		while (j >= 0 && arr[j].getSurfaceType() > tempArr[i].getSurfaceType())
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = tempArr[i];

	}
}



void roofTypeSort(Team arr[], int size)
{
	Team tempArr[AR_SIZE];
	int j;

	for (int i = 1; i < size; ++i)
	{
		tempArr[i] = arr[i];

		j = i - 1;

		while (j >= 0 && arr[j].getStadiumRoofType() > tempArr[i].getStadiumRoofType())
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = tempArr[i];

	}
}



void dateOpenedSort(Team arr[], int size)
{
	Team tempArr[AR_SIZE];
	int j;
	for (int i = 1; i < size; ++i)
	{
		tempArr[i] = arr[i];

		j = i - 1;
		while (j >= 0 && arr[j].getDateOpened() > tempArr[i].getDateOpened())
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = tempArr[i];

	}
}
