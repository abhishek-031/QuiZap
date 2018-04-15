#include<string>
#include <iostream>
#include<fstream>
#include "Player.h"
#include "Question.h"
#include "QuestionMC.h"
#include "QuestionSA.h"
#include "QuestionTF.h"
using namespace std;

int main() {

    Player p1;
    int maxQuestions;
    string fileName,temp;
    int noQues;    //number of questions user wants to answer
    int i;
    cout<<"What is your first name?\n";
    p1.getFirstName();
    cout<<"What is your last name?\n";
    p1.getLastName();
    cout<<"What file stores your questions?\n";
    cin>>fileName;
    fstream testFile;
    testFile.open(R"(C:\Users\LENOVO\Desktop\QuiZap\)" +fileName+(".txt"),ios::in);
    if(!testFile.is_open())
        cout<<"error opening the file\n";
    testFile>>maxQuestions;
    cout<<"How many questions would you like to answer ? (out of "<<maxQuestions<<" )"<<endl;
    cin>>noQues;
    while(!(noQues<=maxQuestions&&noQues!=0))
    {
        cout<<"please enter an integer value between 1 and "<<maxQuestions<<endl;
        cin>>noQues;
    }
    i=noQues;
    while(i--)
    {

    }

    return 0;
}