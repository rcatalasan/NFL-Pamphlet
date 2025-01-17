#ifndef NFL_H
#define NFL_H


#include "header.h"

using namespace std;

/// <summary>
/// This CLASS contains all attributes listed on the Pamphlet and all member functions that perform
/// different actions on the pamphlet data; like sorting and printing.
/// </summary>
class NFL
{
public:

    NFL();

    ~NFL();

    /// <summary>
    /// This function receives an array as a parameter and populates that array using the information from a file.
    /// </summary>
    /// <param name="arr"></param>
    /// <param name="size"></param>
    void inputFn(QString fileName, NFL arr[], int size);

    /// <summary>
    /// This function receives an array as a parameter and sorts that array using the TEAM NAME member of the NFL objects.
    /// </summary>
    /// <param name="arr"></param>
    /// <param name="size"></param>
    void teamNameSort(NFL arr[], int size) const;


    /// <summary>
    /// This function receives an array as a parameter and sorts that array using the STADIUM name member of the NFL objects.
    /// </summary>
    /// <param name="arr"></param>
    /// <param name="size"></param>
    void stadiumSort(NFL arr[], int size) const;


    /// <summary>
    /// This function receives an array as a parameter and sorts that array using the LOCATION member of the NFL objects.
    /// </summary>
    /// <param name="arr"></param>
    /// <param name="size"></param>
    void locationSort(NFL arr[], int size) const;



    /// <summary>
    /// This function receives an array as a parameter and sorts that array using the STADIUM SEATING CAPACITY member of the NFL objects.
    /// </summary>
    /// <param name="arr"></param>
    /// <param name="size"></param>
    void seatingSort(NFL arr[], int size) const;



    /// <summary>
    /// This function receives an array as a parameter and sorts that array using the CONFERENCE member of the NFL objects.
    /// </summary>
    /// <param name="arr"></param>
    /// <param name="size"></param>
    void conferenceSort(NFL arr[], int size) const;



    /// <summary>
    /// This function receives an array as a parameter and sorts that array using the DIVISION member of the NFL objects.
    /// </summary>
    /// <param name="arr"></param>
    /// <param name="size"></param>
    void divisionSort(NFL arr[], int size) const;



    /// <summary>
    /// This function receives an array as a parameter and sorts that array using the STADIUM SURFACE TYPE member of the NFL objects.
    /// </summary>
    /// <param name="arr"></param>
    /// <param name="size"></param>
    void surfaceTypeSort(NFL arr[], int size) const;



    /// <summary>
    /// This function receives an array as a parameter and sorts that array using the STADIUM ROOF TYPE member of the NFL objects.
    /// </summary>
    /// <param name="arr"></param>
    /// <param name="size"></param>
    void roofTypeSort(NFL arr[], int size) const;



    /// <summary>
    /// This function receives an array as a parameter and sorts that array using the STADIUM DATE OPENED member of the NFL objects.
    /// </summary>
    /// <param name="arr"></param>
    /// <param name="size"></param>
    void dateOpenedSort(NFL arr[], int size) const;



    /// <summary>
    /// This function receives an array as a parameter and sorts that array using the conference member of the NFL objects.
    /// </summary>
    //void print() const;
    void print(NFL arr[], int size) const;


    /// <summary>
    /// This function receives an array as a parameter and displays only the teams from the American Conference
    /// </summary>
    /// <param name="arr"></param>
    /// <param name="size"></param>
    void printConf(NFL arr[], int size) const;


    /// <summary>
    /// This function receives an array as a parameter and calculates and displays the total NFL seating capacity
    /// </summary>
    /// <param name="arr"></param>
    /// <param name="size"></param>
    int totalCap(NFL arr[]) const;

    std::string getTeamName();
    std::string getStadiumName();
    int getSeatingCapacity();
    std::string getLocation();
    std::string getConference();
    std::string getDivision();
    std::string getSurfaceType();
    std::string getStadiumRoofType();
    int getDateOpened();

private:

    string teamName;        /// Stores team names.
    string stadiumName;     /// Stores team Stadiums name.
    int seatingCapacity;    /// Stores team Stadiums seating capacity.
    string location;        /// Stores team location.
    string conference;      /// Stores team conference.
    string division;        /// Stores team division.
    string surfaceType;     /// Stores team stadium surface types.
    string stadiumRoofType; /// Stores team stadium roof types.
    int dateOpened;         /// Stores team stadium date opened.
};


#endif // !NFL_H
