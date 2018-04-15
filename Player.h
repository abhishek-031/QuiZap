//
// Created by Devansh on 15-04-2018.
//

#include <iostream>
using namespace std;
class Player {
    string firstName;
    string lastName;
    int score;
public:
    Player(){ score=0; firstName="",lastName="";}
    void incScore(int x){ score+=x; }
    void decScore(int x){ score-=x; }
    void getFirstName(){ cin>>firstName; }
    void getLastName(){ cin>>lastName; }
    void putFirstName(){ cout<<firstName; }
    void putLastName(){ cout<<" "<<lastName<<endl; }
    void putScore(){ cout<<score; }
};

