// Project_Salary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    ifstream inFile("SalaryData.txt");
    ofstream outFile("SalaryOut.txt");

    string lastName;
    string firstName;
    double money;
    double bonus;
    
    outFile << fixed << showpoint;
    outFile << setprecision(2);

    while (inFile >> lastName >> firstName >> money >> bonus) {
        double realBonus = 0;
        realBonus = bonus / 100;

        outFile << firstName<< " " << lastName << " " << money + (money * realBonus) << endl;

    }
    inFile.close();
    outFile.close();

    
    
}

