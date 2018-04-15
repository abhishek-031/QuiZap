//
// Created by KASHISH on 15-04-2018.
//

class QuestionTF: public Question{

public:
    void setQuestion(string question){
        this->question=question+"\n(T/F)?\n";
    }
};