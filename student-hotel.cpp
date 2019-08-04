/* 
GOALS:
- Add room numbers
- Add student name
- GENERATE student attendence ID
- Add student information
*/

#include <iostream>
#include <fstream>
using namespace std;

/*
How we're going to do this:
a main function that has add 
and delete fucntionality added
to it and a list function. Nothing more.

The add statement asking the questions in this order:
1. Gender?
2. Name?
3. School?
-- Generate ID --
-- Pick room number --
*/

// Call main for loopback to main sys without restarting app
int main();

// Lable room numbers
int rMNum[2] = {1, 2};
int rFNum[2] = {3, 4};

// Variable
string name;
string sch;
int randdex = rand() % 2;
int id = rand() % 100000;

// The beginning of each section will have system("clear"); for cleanness
// Change to system("cls") for Windows use
// The add func on top of the main Main func because C++
int add(){
    system("clear");
    // The list of variables
    char mf;
    
    
    // Commands
    cout << "Female or male student?";
    cin >> mf;

    //check if female
    if(mf = 'f'){
        cout << "Name: ";
        cin >> name;

        cout << "School name: ";
        cin >> sch;

        int roomNum = rFNum[randdex];

        ofstream file;
        file.open(name);
        file << name << " from " << sch << " || ID: " << id << " room: " << roomNum;
        file.close();
    }/*check if male */else if (mf = 'm'){
        cout << "Name: ";
        cin >> name;

        cout << "School name: ";
        cin >> sch;

        int roomNum = rMNum[randdex];

        ofstream file;
        file.open(name);
        file << name << " from " << sch << " || ID: " << id << " room: " << roomNum;
        file.close();

        int RandIndex = rand() % 4;
    } else {
        add();
    }
    

    return 0;
}

// The delete func
int del(){
    system("clear");
    cout << "This does not delete the person's file but rather the data in it";
    cout << "Name: ";
    cin >> name;

    ifstream file;
    file.open(name, ofstream::out | ofstream::trunc);
    return 0;
}


//This is where our app will be starting
int main(){
    system("clear");


    cout << "Pick an option" << endl <<
    "--------------" << endl <<
    "1 --> Add new student" << endl <<
    "2 --> Delete existing student" << endl <<
    "3 --> Quit" << endl;
    int op;
    cin >> op;
    if(op == 1){
        add();
    } 
    if (op == 2){
        del();
    } 
    if (op == 3){
        return 1;
    }
    if(op > 3 || op<1){
        // Loop back to main to pick a correct answer.
        main();
    }
    

    return 0;
}
