// Name: Joshua Christensen
// Project: Lab5.1-5.9
// File: main.cpp
// Purposes: complete all of the questions in the book
// Date: 1/24/20

#include <iostream> //used for cin and cout
#include <iomanip> //used for decimals

using namespace std; //make code simpler

//define all of our functions for each of the projects
void proj0();
void proj1();
void proj2();
void proj3();
void proj4();
void proj5();
void proj6();
void proj7();
void proj8();
void proj9();

int main() {
    typedef void(*FunctionPointer)(); //make function pointers a type we can use

    //define all of our projects as pointers
    FunctionPointer pproj0 = proj0;
    FunctionPointer pproj1 = proj1;
    FunctionPointer pproj2 = proj2;
    FunctionPointer pproj3 = proj3;
    FunctionPointer pproj4 = proj4;
    FunctionPointer pproj5 = proj5;
    FunctionPointer pproj6 = proj6;
    FunctionPointer pproj7 = proj7;
    FunctionPointer pproj8 = proj8;
    FunctionPointer pproj9 = proj9;

    //create an array of all the pointers
    FunctionPointer funcArray[10] = {
            pproj0,
            pproj1,
            pproj2,
            pproj3,
            pproj4,
            pproj5,
            pproj6,
            pproj7,
            pproj8,
            pproj9,
    };

    int choice; //used to store the user's choice of project

    do {
        cout << "What would you like to do?\n"
             << "1: (5-1) Calc Buses and Vans\n"
             << "2: (5-2) Calc Area of an Ellipse\n"
             << "3: (5-3) Convert degrees to radians\n"
             << "4: (5-4) Convert mph to feet per second\n"
             << "5: (5-5) Calc simple interest\n"
             << "6: (5-6) Calc current through a resistor\n"
             << "7: (5-7) Calc Force from acceleration and mass\n"
             << "8: (5-8) Calc energy for given mass\n"
             << "9: (5-9) Calc fine for a speeding ticket\n"
             << "0: Quit\n"
             << "Enter your choice: ";
        cin >> choice; //get user's choice

        funcArray[choice](); //grab that choice's function from the array and call it
    } while (choice != 0); //quit if choice is 0;

    return 0;
}

void proj0() {
    cout << "\nThanks for Running!\n"
         << "Done!\n";
}

void proj1() {
    int people = 0;
    int leftOvers = 0;
    int buses = 0;

    cout << "How many people need transportation? ";
    cin >> people;

    leftOvers = people % 50;
    buses = (people - leftOvers)/50;

    cout << "\nWe will need " << buses << " buses with " << leftOvers << " people in vans.\n";
}

void proj2() {
    float x = 0;
    float y = 0;
    float area = 0;
    const float pi = 3.14159;

    cout << "\nEnter the length of one axis: ";
    cin >> x;
    cout << "\nEnter the length of the other axis: ";
    cin >> y;

    area = pi * x * y;

    cout << "\nThe area is " << area << ".\n";
}

void proj3() {
    float degrees = 0;
    float radians = 0;

    cout << "\nEnter an angle in degrees: ";
    cin >> degrees;

    radians = degrees / 57.3;

    cout << "\nThat angle in radians is " << radians << ".\n";
}

void proj4() {
    float mph = 0;
    float fps = 0;

    cout << "\nEnter a speed in miles per hour to convert: ";
    cin >> mph;

    fps = mph * 5280 / 3600;
    cout << "\nThat is " << fps << " feet per second.\n";
}

void proj5() {
    float principle = 0;
    float rate = 0;
    float time = 0;
    float interest = 0;

    cout << "\nEnter the principle: ";
    cin >> principle;
    cout << "\nEnter the interest rate as a decimal: ";
    cin >> rate;
    cout << "\nEnter the period in years: ";
    cin >> time;

    interest = principle * rate * time;

    cout << "\nThe simple interest would be " << interest << ".\n";
}

void proj6() {
    float volts = 0;
    float resistance = 0;
    float current = 0;

    cout << "\nEnter the voltage: ";
    cin >> volts;
    cout << "\nEnter the resistance: ";
    cin >> resistance;

    current = volts / resistance;

    cout << "\nThe current flowing through the resistor is " << current << " amps.\n";
}

void proj7() {
    float acceleration = 0;
    float mass = 0;
    float force = 0;

    cout << "\nEnter the acceleration of the object: ";
    cin >> acceleration;
    cout << "\nEnter the mass of the object: ";
    cin >> mass;

    force = mass * acceleration;

    cout << "\nThe force experienced by the object is " << force << " Newtons.\n";

}

void proj8() {
    const int speedOfLight = 299792458;
    float mass = 0;
    double energy = 0;

    cout << "\nHow much mass is converted to energy: ";
    cin >> mass;

    energy = mass * speedOfLight * speedOfLight;

    cout << "\nThe amount of energy released will be " << energy << " Joules.\n";
}

void proj9() {
    const float baseFine = 32.69;
    const float fineRate = 5.75;
    float mphOverLimit = 0;
    float ticket = 0;

    cout << "\nHow many mph over the speed limit: ";
    cin >> mphOverLimit;

    ticket = mphOverLimit * fineRate + baseFine;

    cout << "\nThe total ticket is $"<< setiosflags(ios::fixed) << setprecision(2) << ticket << ".\n";
}
