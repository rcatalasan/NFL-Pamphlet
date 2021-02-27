#include "header.h"


void inputFn(Team arr[], int size)
{
    // declaring ifstram variable to handle input file
    ifstream inFile;

    // opening input file
    inFile.open("C:\\Users\\00joh\\Documents\\Pamphlet\\NFL.txt");
    std::string temp;

    int index = 0;	// PROC - loop control variable and array traversal

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
        getline(inFile, temp); arr[index].changeDateOpened(temp);
        index++;
    }
    // closes input file
    inFile.close();
}
