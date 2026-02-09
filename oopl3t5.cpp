#include <iostream>
#include <string>
using namespace std;

class FootballPlayer
{
private:
    string playerName;
    string position;
    int goalCount;

public:
    FootballPlayer()
    {
        playerName = "Unknown Player";
        position = "Benchwarmer";
        goalCount = 0;
    }

    FootballPlayer(string name, string pos = "Goal Keepper", int goals = 0)
    {
        playerName = name;
        position = pos;
        goalCount = goals;
    }

    FootballPlayer(const FootballPlayer &player)
    {
        playerName = player.playerName;
        position = player.position;
        goalCount = player.goalCount;
    }

    void scoreGoals(int goals)
    {
        goalCount = goalCount + goals;
    }

    void displayPlayer()
    {
        cout << "Player Name: " << playerName << endl;
        cout << "Position: " << position << endl;
        cout << "Goal Count: " << goalCount << endl;
        cout << "Commentary: This player looks ready for the Ballon d'Or!" << endl;
    }
};

int main()
{
    FootballPlayer p1;
    p1.displayPlayer();

    FootballPlayer p2("Lionel Messi", "Forward", 800);
    p2.scoreGoals(5);
    p2.displayPlayer();

    FootballPlayer p3 = p2;
    p3.displayPlayer();

    FootballPlayer p4("Ronaldo");
    p4.displayPlayer();

    return 0;
}
