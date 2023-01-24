// Assignment 4.1
// Angela Flores
// CSCI 40 Fall 2022
//

#include <iostream>
#include "Patient Record.h"
using namespace std;

int main()
{
    PatientRecord recordA;
    PatientRecord recordB ("F", "Angela","cough", 3);
    
    recordA.display();
    recordB.display();
    return 0;
    
}
