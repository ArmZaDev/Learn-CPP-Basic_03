﻿#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    char keyboard[4][10]{
        { '1','2','3','4','5','6','7','8','9','0'},
        { 'Q','W','E','R','T','Y','U','I','O','P'},
        { 'A','S','D','F','G','H','J','K','L',';'},
        { 'Z','X','C','V','B','N','M',',','.','/'}
    };

    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 10; column++) {
            cout << keyboard[row][column] << " ";
        }
        cout << endl;
    }



    /*int numbers[3][4] = { 
                      { 0,1,2,3 },
                      { 4,5,6,7, },
                      { 8,9,10,11 } 
                    };

    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 4; column++) {
            cout << numbers[row][column] << " ";
        }
        cout << endl;
    }*/
    
    
    cout << endl;
    return 0;
}