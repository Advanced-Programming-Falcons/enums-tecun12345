#include <iostream>

using namespace std;

enum Gamemode {
    Easy = 1,
    Medium = 3,
    Hard = 15
};

main (void){
    Gamemode Mode = Medium;
    switch (Mode)
    {
        case Easy:
        cout << "GameMode: Easy" << "\nCausal Playthrough, have a nice time.\n"  << Mode << " basic";
        break;

        case Medium:
        cout << "GameMode: Medium" << "\nFun Playthrough, have a fighting time.\n" << Mode << " more Exp and Gold";
        break;

        case Hard:
        cout << "GameMode: Hard" << "\nHel* Playthrough, Make sure you retrun alive soldier.\n" << Mode << " more Exp and Gold";
        break;
    }

}
