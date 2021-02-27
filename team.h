#ifndef TEAM_H_
#define TEAM_H_

#include <string>
#include <iostream>

class Team{
public:
    Team();
    ~Team();
    std::string getTeamName();
    std::string getStadiumName();
    std::string getSeatingCapacity();
    std::string getLocation();
    std::string getConference();
    std::string getDivision();
    std::string getSurfaceType();
    std::string getStadiumRoofType();
    std::string getDateOpened();
    void changeTeamName(std::string tn);
    void changeStadiumName(std::string sn);
    void changeSeatingCapacity(std::string sc);
    void changeLocation(std::string L);
    void changeConference(std::string c);
    void changeDivision(std::string d);
    void changeSurfaceType(std::string st);
    void changeStadiumRoofType(std::string srt);
    void changeDateOpened(std::string);
private:
    std::string teamName;
    std::string stadiumName;
    std::string seatingCapacity;
    std::string location;
    std::string conference;
    std::string division;
    std::string surfaceType;
    std::string stadiumRoofType;
    std::string dateOpened;
};
#endif /* TEAM_H_ */
