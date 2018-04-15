//
// Created by KASHISH on 15-04-2018.
//
#include "Question.h"
class QuestionSA: public Question{
public:
    void setQuestion(string question){
        this.question=question+"\n";
    }
};