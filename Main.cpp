#include "Header.h"


int main()
{
	Team TeamArray[AR_SIZE];

	inputFn(TeamArray, AR_SIZE);

	stadiumSort(TeamArray, AR_SIZE);

	//locationSort(TeamArray, AR_SIZE);

	//seatingSort(TeamArray, AR_SIZE);

	//conferenceSort(TeamArray, AR_SIZE);

	//divisionSort(TeamArray, AR_SIZE);

	//surfaceTypeSort(TeamArray, AR_SIZE);

	//roofTypeSort(TeamArray, AR_SIZE);

	//dateOpenedSort(TeamArray, AR_SIZE);


	for (int i = 0; i < AR_SIZE; i++)
	{
		cout << left << setw(3) << i + 1 << " - ";
		cout << setw(26) << TeamArray[i].teamName;
		cout << setw(29) << TeamArray[i].stadiumName;
		cout << setw(9) << TeamArray[i].seatingCapacity;
		cout << setw(30) << TeamArray[i].location;
		cout << setw(31) << TeamArray[i].conference;
		cout << setw(12) << TeamArray[i].division;
		//cout << setw(46) << TeamArray[i].surfaceType;
		//cout << setw(14) << TeamArray[i].stadiumRoofType;
		cout << TeamArray[i].dateOpened << endl;
	}


	return 0;
}