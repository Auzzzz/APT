#include  <iostream>
#include  <string>

using namespace std;

int  main () {
    //Declare the name char
    string name;
    // Print out to enter name
    cout << "Please enter your full name: ";
    // Get name from console and insert into the char 
    getline (cin,name);

    //Declare the age int
    int age;
    // Print out to enter age
    cout << "Please enter your age: ";
    // Get age from console and insert into the int 
    cin >> age;

    //Declare the age int
    char dob[10];
    // Print out to enter dob
    cout << "Please enter your D.O.B E.g. 12/12/21 :";
    // Get dob from console and insert into the char 
    cin >> dob;
    
    // <<endl prints on a new line
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "DOB: " << dob << endl;
    
}