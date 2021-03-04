#include "NFL.h"

int main()
{
	NFL NFLArray[AR_SIZE];
	
	NFLArray->inputFn(NFLArray, AR_SIZE);

	/*Uncomment the functions below to sort by desired column*/
	
	//NFLArray->stadiumSort(NFLArray, AR_SIZE);

	//NFLArray->locationSort(NFLArray, AR_SIZE);

	//NFLArray->seatingSort(NFLArray, AR_SIZE);

	//NFLArray->conferenceSort(NFLArray, AR_SIZE);

	//NFLArray->divisionSort(NFLArray, AR_SIZE);

	//NFLArray->surfaceTypeSort(NFLArray, AR_SIZE);

	//NFLArray->roofTypeSort(NFLArray, AR_SIZE);

	//NFLArray->dateOpenedSort(NFLArray, AR_SIZE);

	
	// Function call to print the array
	NFLArray->print(NFLArray, AR_SIZE);

	cout << "\n\n\n";

	// Function call to display American Conference teams only
	NFLArray->printConf(NFLArray, AR_SIZE);

	// Function call to display the total NFL capacity
	NFLArray->totalCap(NFLArray, AR_SIZE);


	return 0;
}
