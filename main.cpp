#include<string>
#include <iostream>
#include<fstream>
#include "Player.h"

using namespace std;

int main() {

    Player p1;
    string maxQuestions;
    string fileName;
    cout<<"What is your first name?\n";
    p1.getFirstName();
    cout<<"What is your last name?\n";
    p1.getLastName();
    cout<<"What file stores your questions?\n";
    cin>>fileName;
    fstream testFile;
    testFile.open(fileName,ios::in);
    if(!testFile.is_open())
        cout<<"error opening the file\n";
    getline(testFile,maxQuestions);
    cout<<"How many questions would you like to answer ? (out of "<<maxQuestions<<" )"<<endl;

    return 0;
}