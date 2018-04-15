//
// Created by KASHISH on 15-04-2018.
//
class QuestionMC: public Question {

public:
    int nOptions; // number of options
    QuestionMC(){nOptions=0;}
    void setQuestion(string question){
        this->question=question;
    }
};