/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mary Brashear
 */

#include <iostream>
using namespace std;

int main() {
    //declare variables
    int n;
    //get user input
    cout << "Enter an integer";
    cin >> n;
    //see if the number is even or odd
    if ( n % 2 == 0)
        cout << "The value " << n << " is an even number.";
    else
        cout << "The value " << n << " is an odd number.";

    return 0;
}
