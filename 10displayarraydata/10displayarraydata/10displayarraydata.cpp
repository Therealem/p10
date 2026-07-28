// 10displayarraydata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Exauce Mukadi
//Tarrant County College
//Fall 2025
//week 10 display array data

#include <iostream>
#include <string>
using namespace std;

int main() {
    // IPO: Input - Declare and initialize arrays
    const int ARRAY_SIZE = 6;

    string stockSymbols[ARRAY_SIZE] = { "AZN", "HSBC", "SHEL", "LIN", "UL", "ARM" };
    string companyNames[ARRAY_SIZE] = {
        "AstraZeneca",
        "HSBC",
        "Shell",
        "Linde",
        "Unilever",
        "Arm Holdings"
    };

    // IPO: Output - Display stock symbols
    cout << "Top 6 Stock Symbols" << endl;
    for (int index = 0; index < ARRAY_SIZE; index++) {
        cout << stockSymbols[index] << endl;
    }

    cout << endl;

    // IPO: Output - Display companies
    cout << "Top 6 Companies" << endl;
    for (string company : companyNames) {
        cout << company << endl;
    }

    cout << endl;

    // IPO: Processing - Search loop
    bool keepSearching = true;
    string searchSymbol;
    char answer;

    while (keepSearching) {
        cout << "Enter a Stock Symbol to search for: ";
        cin >> searchSymbol;

        int foundIndex = -1;

        // Linear search
        for (int index = 0; index < ARRAY_SIZE; index++) {
            if (stockSymbols[index] == searchSymbol) {
                foundIndex = index;
            }
        }

        if (foundIndex != -1) {
            cout << "Company Found: " << companyNames[foundIndex] << endl;
        }
        else {
            cout << "No Match Found" << endl;
        }

        cout << "Do you want to search again? (y/n): ";
        cin >> answer;

        if (answer == 'n' || answer == 'N') {
            keepSearching = false;
        }

        cout << endl;
    }

    cout << "END OF PROGRAM" << endl;

    return 0;
}