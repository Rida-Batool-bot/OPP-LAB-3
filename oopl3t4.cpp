#include <iostream>
#include <string>
using namespace std;

class CricketPlayer
{
private:
    string name;
    int playerNumber;
    float battingAverage;

public:

    CricketPlayer(string name, int playerNumber, float battingAverage)
    {
        this->name = name;
        this->playerNumber = playerNumber;
        this->battingAverage = battingAverage;
    }

    
    CricketPlayer& improveAverage(int runs)
    {
        battingAverage = battingAverage + (runs * 0.05);
        return *this;
    }

    
    void playMatch(int runsScored)
    {
        battingAverage = (battingAverage + runsScored) / 2;
    }

    
    void displayPlayerStats()
    {
        cout << "Player Name: " << name << endl;
        cout << "Player Number: " << playerNumber << endl;
        cout << "batting Average: " << battingAverage << endl;
        cout << "commentry: This batting average is more consistent than Karachi's weather!" << endl;
        
    }
};

int main()
{ 
    CricketPlayer Imran("Imran Khan", 1, 48.5);
    CricketPlayer Afridi("Shahid Afridi", 3, 39.8);
    CricketPlayer Javeid ("Javeid Miandat", 2, 46.2);

    Imran.playMatch(102);
    Imran.improveAverage(40).improveAverage(30);

    Afridi.playMatch(75);
    Afridi.improveAverage(25);

    Javeid.playMatch(10);
    Javeid.improveAverage(60);

    Imran.displayPlayerStats();
    Afridi.displayPlayerStats();
    Javeid.displayPlayerStats();

    string name;
    int number;
    float avg;
    int runs;

    cout << "Enter player name: ";
    getline(cin, name);

    cout << "Enter player number: ";
    cin >> number;

    cout << "Eter batting average: ";
    cin >> avg;

    CricketPlayer userPlayer(name, number, avg);

    cout << "Enter runs scored in match: ";
    cin >> runs;

    userPlayer.playMatch(runs);
    userPlayer.improveAverage(20);

    userPlayer.displayPlayerStats();

    return 0;
}
