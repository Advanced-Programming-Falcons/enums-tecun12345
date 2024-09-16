#include <iostream>

using namespace std;

enum Gamemode {
    Easy = 1,
    Medium = 3,
    Hard = 15
};

main (void){
    Gamemode Mode = Medium;
    int Mutiplier; 
    switch (Mode)
    {
        case Easy:
        cout << "GameMode: " << Mode << "\nCausal Playthrough, have a nice time.";
        Mutiplier = 1;
        break;

        case Medium:
        cout << "GameMode: " << Mode << "\nFun Playthrough, have a fighting time.";
        Mutiplier = 3;
        break;

        case Hard:
        cout << "GameMode: " << Mode << "\nHel* Playthrough, Make sure you retrun alive soldier.";
        Mutiplier = 15;
        break;
    }

}