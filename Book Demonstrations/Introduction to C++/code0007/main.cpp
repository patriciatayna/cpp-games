// Game Stats 3.0
// Constants

#include <iostream>
using namespace std;

int main()
{
    const int ALIENS_POINTS = 150;
    int aliensKilled = 10;
    int score = aliensKilled*ALIENS_POINTS;
    cout << "score: " << score << endl;
    
    enum difficulty 
    {
        NOVICE, EASY, NORMAL, HARD, UNBEATABLE
    };
    
    difficulty myDifficulty = EASY;
    
    enum shipCost
    {
        FIGHTER_COST=25, BOMBER_COST, CRUISER_COST=50
        // any enumerators that are not assigned values 
        //  get the value of the previous plus one, so BOMBER_COST = 26
    };
    
    shipCost myShipCost = BOMBER_COST;
    cout << "To upgrade my ship to a Cruiser will cost "
        << (CRUISER_COST-myShipCost) << " Resource Points.\n";
    
    return 0;
}