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

    Player p1; //object of class player
    int maxQuestions; //maximum questions the player can attempt
    string fileName,tempStr,answer; //string which has address of file and a temporary string and the string in which answer will be taken
    int noQues;    //number of questions user wants to answer
    int i,j,tempInt; //iterating and temporary integer variables
    cout<<"What is your first name?\n";
    p1.getFirstName();  //getting first name
    cout<<"What is your last name?\n";
    p1.getLastName();   //getting last name
    cout<<"What file stores your questions?\n";
    cin>>fileName;  //input file address
    fstream testFile;
    testFile.open("(C:\\Users\\LENOVO\\Desktop\\QuiZap\\)" +fileName+(".txt"),ios::in);
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
        testFile>>tempStr;
        if(tempStr=="TF") {
            QuestionTF q;
            testFile >> tempInt;
            q.setPoints(tempInt);
            getline(testFile, tempStr);
            q.setQuestion(tempStr);
            getline(testFile, tempStr);
            q.setAns(tempStr);
            cout << "points = " << q.points << endl;
            cout << q.question;
            cin >> answer;
            if (answer != "SKIP") {
                if (q.checkAns(answer)) {
                    p1.incScore(q.points);
                    cout << "Correct! You get " << q.points << " points.\n";
                    }
                else {
                    cout << "Incorrect! you lose " << q.points << " points.\n";
                    p1.decScore(q.points);
                    }
                }
            else
                cout<<"You have elected to skip this question.\n";
        }

        else if(tempStr == "MC")
        {
            QuestionMC q;
            testFile >> tempInt;
            q.setPoints(tempInt);
            getline(testFile,tempStr);
            q.setQuestion(tempStr);
            //testFile>>q.nOptions;
            //j=q.nOptions;
            testFile>>j;
            while(j--){
                getline(testFile,tempStr);
                cout<<tempStr<<endl;
            }
            getline(testFile,tempStr);
            q.setAns(tempStr);
            cin>>answer;
            if (answer != "SKIP") {
                if (q.checkAns(answer)) {
                    p1.incScore(q.points);
                    cout << "Correct! You get " << q.points << " points.\n";
                }
                else {
                    cout << "Incorrect! you lose " << q.points << " points.\n";
                    p1.decScore(q.points);
                }
            }
            else
                cout<<"You have elected to skip this question.\n";
        }
        else if(tempStr=="SA"){
            QuestionSA q;
            testFile>>tempInt;
            q.setPoints(tempInt);
            getline(testFile,tempStr);
            q.setQuestion(tempStr);
            getline(testFile,tempStr);
            q.setAns(tempStr);
            cin>>answer;
            if (answer != "SKIP") {
                if (q.checkAns(answer)) {
                    p1.incScore(q.points);
                    cout << "Correct! You get " << q.points << " points.\n";
                }
                else {
                    cout << "Incorrect! you lose " << q.points << " points. The correct answer is "<<q.ans<<endl;
                    p1.decScore(q.points);
                }
            }
            else
                cout<<"You have elected to skip this question.\n";
        }
        }

        p1.putFirstName();
        p1.putLastName();
        cout<<" ,your quiz is over,\nYour score is "<<p1.putScore();


    return 0;
}