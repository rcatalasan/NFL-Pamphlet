#include "NFL.h"

/// Constructor
NFL::NFL()
{
    teamName = " ";
    stadiumName = " ";
    seatingCapacity = 0;
    location = " ";
    conference = " ";
    division = " ";
    surfaceType = " ";
    stadiumRoofType = " ";
    dateOpened = 0;
}

/// <summary>
/// Destructor
/// </summary>
NFL::~NFL(){}


void NFL::inputFn(NFL arr[], int size)
{
    // declaring ifstram variable to handle input file
    ifstream inFile;

    // opening input file
    inFile.open("C:\\Users\\00joh\\Documents\\Pamphlet\\NFL.txt");

    int index = 0;			// PROC - loop control variable and array traversal

    // loop that traverses the array
    while (inFile && index < size)
    {
        // populating the array with user input
        getline(inFile, arr[index].teamName);
        getline(inFile, arr[index].stadiumName);
        //getline(inFile, arr[index].seatingCapacity);
        inFile >> arr[index].seatingCapacity;
        inFile.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(inFile, arr[index].location);
        getline(inFile, arr[index].conference);
        getline(inFile, arr[index].division);
        getline(inFile, arr[index].surfaceType);
        getline(inFile, arr[index].stadiumRoofType);
        inFile >> arr[index].dateOpened;
        inFile.ignore(numeric_limits<streamsize>::max(), '\n');

        index++;
    }
    // closes input file
    inFile.close();
}


void NFL::print(NFL arr[], int size) const
{
    string seats;

    for (int i = 0; i < AR_SIZE; i++)
    {
        cout << left << setw(3) << i + 1 << " - ";
        cout << setw(26) << arr[i].teamName;
        cout << setw(29) << arr[i].stadiumName;

        // calling function to display seating capacity numbers with a coma
        seats = thousandSeparator(arr[i].seatingCapacity);
        cout << setw(9) << seats;

        cout << setw(30) << arr[i].location;
        cout << setw(31) << arr[i].conference;
        cout << setw(12) << arr[i].division;
        //cout << setw(46) << arr[i].surfaceType;
        //cout << setw(14) << arr[i].stadiumRoofType;
        cout << arr[i].dateOpened << endl;
    }
}




void NFL::teamNameSort(NFL arr[], int size) const
{
    NFL tempArr[AR_SIZE];
    int j;

    for (int i = 1; i < size; ++i)
    {
        tempArr[i] = arr[i];

        j = i - 1;

        while (j >= 0 && arr[j].teamName > tempArr[i].teamName)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = tempArr[i];

    }
}




void NFL::stadiumSort(NFL arr[], int size) const
{
    NFL tempArr[AR_SIZE];
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



void NFL::locationSort(NFL arr[], int size) const
{
    NFL tempArr[AR_SIZE];
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



void NFL::seatingSort(NFL arr[], int size) const
{
    NFL tempArr[AR_SIZE];
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



void NFL::conferenceSort(NFL arr[], int size) const
{
    NFL tempArr[AR_SIZE];
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



void NFL::divisionSort(NFL arr[], int size) const
{
    NFL tempArr[AR_SIZE];
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



void NFL::surfaceTypeSort(NFL arr[], int size) const
{
    NFL tempArr[AR_SIZE];
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



void NFL::roofTypeSort(NFL arr[], int size) const
{
    NFL tempArr[AR_SIZE];
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



void NFL::dateOpenedSort(NFL arr[], int size) const
{
    NFL tempArr[AR_SIZE];
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




void NFL::printConf(NFL arr[], int size) const
{
    string seats;

    // Sort array by team name first
    teamNameSort(arr, AR_SIZE);

    for (int i = 0; i < AR_SIZE; i++)
    {


        if (arr[i].conference == "American Football Conference")
        {
            cout << setw(26) << arr[i].teamName;
            cout << setw(29) << arr[i].stadiumName;

            // calling function to display seating capacity numbers with a coma
            seats = thousandSeparator(arr[i].seatingCapacity);
            cout << setw(9) << seats;

            cout << setw(30) << arr[i].location;
            cout << setw(31) << arr[i].conference;
            cout << setw(12) << arr[i].division;
            //cout << setw(46) << arr[i].surfaceType;
            //cout << setw(14) << arr[i].stadiumRoofType;
            cout << arr[i].dateOpened << endl;
        }
    }

}



void NFL::totalCap(NFL arr[], int size) const
{
    int tempCap = 0;
    int totalCap = 0;
    string seats;


    seatingSort(arr, AR_SIZE);

    for (int i = 0; i < AR_SIZE; i++)
    {

        if (arr[i].seatingCapacity != tempCap)
        {
            totalCap += arr[i].seatingCapacity;
        }

        tempCap = arr[i].seatingCapacity;
    }

    seats = thousandSeparator(totalCap);

    cout << "\n\nTOTAL NFL CAPACITY IS: " << seats << endl << endl;
}

std::string NFL::getTeamName()
{
    return teamName;
}
std::string NFL::getStadiumName()
{
    return stadiumName;
}
int NFL::getSeatingCapacity()
{
    return seatingCapacity;
}
std::string NFL::getLocation()
{
    return location;
}
std::string NFL::getConference()
{
    return conference;
}
std::string NFL::getDivision()
{
    return division;
}
std::string NFL::getSurfaceType()
{
    return surfaceType;
}
std::string NFL::getStadiumRoofType()
{
    return stadiumRoofType;
}
int NFL::getDateOpened()
{
    return dateOpened;
}

