//  Patient Record.h
//  Assignment 4.1
//  Angela Flores
//  CSCI 40 Fall 2022

#ifndef Patient_Record_h
#define Patient_Record_h

#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

class PatientRecord
{
private:
    string lastName;
    string firstName;
    string symptoms;
    double priority;
public:
    //constructors
    PatientRecord();
    PatientRecord( string last, string first, string s, double p);
    //set and get functions
    void setLastName( string last);
    string getLastName();
    void setFirstName( string first);
    string getFirstName ();
    void setSymptoms( string s);
    string getSymptoms();
    void setpriority( double p);
    double getpriority();
    void display();
};
// Implementation
PatientRecord::PatientRecord()
{
    lastName="None";
    firstName="None";
    symptoms="Symptom";
    priority = 0;
}
PatientRecord::PatientRecord(string last, string first, string s, double p)
{
    lastName=last;
    firstName=first;
    symptoms=s;
    priority=p;
}
void PatientRecord::setLastName( string last)
{
    lastName=last;
}
string PatientRecord::getLastName()
{
    return lastName;
}
void PatientRecord::setFirstName( string first)
{
    firstName=first;
}
string PatientRecord::getFirstName()
{
    return firstName;
}
void PatientRecord::setSymptoms( string s)
{
    symptoms=s;
}
string PatientRecord::getSymptoms()
{
    return symptoms;
}
void PatientRecord::setpriority( double p)
{
    priority =p;
}
double PatientRecord::getpriority()
{
    return priority;
}
void PatientRecord::display()
{
    cout<<"==========================================="<<endl;
    cout<<setw(30)<<"Patient Last Name: "<<setw(10)<<lastName<<endl;
    cout<<setw(30)<<"Patient First Name: "<<setw(10)<<firstName<<endl;
    cout<<setw(30)<<"Patient symptoms: "<<setw(10)<<symptoms<<endl;
    cout<<setw(30)<<"Patient priority: "<<setw(10)<<priority<<endl;
    cout<<"==========================================="<<endl;
    cout<<endl;
}

#endif
