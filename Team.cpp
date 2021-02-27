#include "Team.h"

Team::Team() {
    // TODO Auto-generated constructor stub

}

Team::~Team() {
    // TODO Auto-generated destructor stub
}

std::string Team::getTeamName()
{
    return teamName;
}
std::string Team::getStadiumName()
{
    return stadiumName;
}
std::string Team::getSeatingCapacity()
{
    return seatingCapacity;
}
std::string Team::getLocation()
{
    return location;
}
std::string Team::getConference()
{
    return conference;
}
std::string Team::getDivision()
{
    return division;
}
std::string Team::getSurfaceType()
{
    return surfaceType;
}
std::string Team::getStadiumRoofType()
{
    return stadiumRoofType;
}
std::string Team::getDateOpened()
{
    return dateOpened;
}

void Team::changeTeamName(std::string tn){
    teamName = tn;
}
void Team::changeStadiumName(std::string sn){
    stadiumName = sn;
}
void Team::changeSeatingCapacity(std::string sc){
    seatingCapacity = sc;
}
void Team::changeLocation(std::string L){
    location = L;
}
void Team::changeConference(std::string c){
    conference = c;
}
void Team::changeDivision(std::string d){
    division = d;
}
void Team::changeSurfaceType(std::string st){
    surfaceType = st;
}
void Team::changeStadiumRoofType(std::string srt){
    stadiumRoofType = srt;
}
void Team::changeDateOpened(std::string d){
    dateOpened = d;
}
