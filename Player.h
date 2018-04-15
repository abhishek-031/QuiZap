//
// Created by Devansh on 15-04-2018.
//

#ifndef TRAINING_PROGRAM_PLAYER_H
#define TRAINING_PROGRAM_PLAYER_H


#include <iostream>
using namespace std;
class Player {
    char firstName[20];
    char lastName[20];
    int score;
public:
    Player(){ score=0; }
    void incScore(int x){ score+=x; }
    void decScore(int x){ score-=x; }
    void getFirstName(){ cin>>firstName; }
    void getLastName(){ cin>>lastName; }
    void putFirstName(){ cout<<firstName; }
    void putLastName(){ cout<<" "<<lastName<<endl; }
    void putScore(){ cout<<score; }
};

//testing
#endif //TRAINING_PROGRAM_PLAYER_H
