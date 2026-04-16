//Game Stats

#include <iostream>
using namespace std;

int main()
{
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;
    
    short lives, aliensKilled;
    
    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    
    double engineTemp = 6572.89;
    
    cout << "score: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "playAgain: " << playAgain << endl;
    
    // skipping shieldsUp since you don't
    
    cout << "engineTemp: " << engineTemp << endl;
    cout << "lives: "<< lives << endl;
    cout << "aliensKilled: " << aliensKilled << endl;
    
    int fuel;
    
    cout << "How much fuel?";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;
    
    typedef unsigned short int ushort;
    ushort bonus = 10;
    
    cout << "\nbonus: " << bonus << endl;
    
    return 0;
}