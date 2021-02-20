#include "Header.h"


void inputFn(Team arr[], int size)
{
	// declaring ifstram variable to handle input file
	ifstream inFile;

	// opening input file
	inFile.open("NFL.txt");

	int index = 0;			// PROC - loop control variable and array traversal

	// loop that traverses the array
	while (inFile && index < size)
	{
		// populating the array with user input
		getline(inFile, arr[index].teamName);
		getline(inFile, arr[index].stadiumName);
		getline(inFile, arr[index].seatingCapacity);
		getline(inFile, arr[index].location);
		getline(inFile, arr[index].conference);
		getline(inFile, arr[index].division);
		getline(inFile, arr[index].surfaceType);
		getline(inFile, arr[index].stadiumRoofType);
		//getline(inFile, arr[index].dateOpened);
		inFile >> arr[index].dateOpened;
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');
		
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

		while (j >= 0 && arr[j].stadiumName > tempArr[i].stadiumName)
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

		while (j >= 0 && arr[j].seatingCapacity < tempArr[i].seatingCapacity)
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

		while (j >= 0 && arr[j].location > tempArr[i].location)
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

		while (j >= 0 && arr[j].conference > tempArr[i].conference)
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

		while (j >= 0 && arr[j].division > tempArr[i].division)
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

		while (j >= 0 && arr[j].surfaceType > tempArr[i].surfaceType)
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

		while (j >= 0 && arr[j].stadiumRoofType > tempArr[i].stadiumRoofType)
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

		while (j >= 0 && arr[j].dateOpened > tempArr[i].dateOpened)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = tempArr[i];

	}
}





