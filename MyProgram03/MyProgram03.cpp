﻿#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    /*
    // while loops

    string name;

    while (name.empty()) {
        cout << "Please enter your name: ";
        getline(cin, name);
    }
    cout << "Welcome " << name;
*/

    //do-whlie loops

    string answer;

    do {
        cout << "You are playing THE GAME" << endl;
        cout << "* pew pew *";
        cout << "Press q to quit!" << endl;
        getline(cin, answer);
        cout << "***************************" << endl;
    } while (answer.at(0) != 'q' && answer.at(0) != 'Q');

    cout << "You have quit the game (:" << endl;

    cout << endl;
    return 0;
}