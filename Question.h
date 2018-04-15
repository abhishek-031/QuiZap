//
// Created by KASHISH on 15-04-2018.
//
#include <iostream>
#include <utility>
using namespace std;

class Question {

public:
    string question,ans;
    int points;

    virtual void setQuestion() = 0;

    void setAns(string ans){
        this->ans= std::move(ans);
    }

    void setPoints(int points){
        this->points=points;
    }

    int getPoints(){
        return points;
    }

    bool checkAns(const string ans) {
        return ans == this->ans;
    }
};
