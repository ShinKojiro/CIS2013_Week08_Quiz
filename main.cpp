#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

const double TIP = 0.15;
double moneyInput = 0;
double moneyTipTotal;
double changeConversion;
double quarters;
double dimes;
double nickles;
double pennies;
char optionChoice1;

void introduction(){
    cout << "Welcome to change calculator 2019" << endl << endl;
    cout << "Enter a monetary value (eg 0.00): ";
}

void inputOptions(){
    cin >> moneyInput;
    cout << fixed;
    cout << setprecision(2);
    cout << endl << "You entered $" << moneyInput << endl << endl;

    cout << "What do you want to do with this money? " << endl
    << "A) Show a 15% tip" << endl
    << "B) Show amount in number of Quarters, Nickles, Dimes, and Pennies" << endl
    << "C) Show exchange rates" << endl << endl;
    cin >> optionChoice1;
}

void conversions(){
    cout << setprecision(2);

    quarters = moneyInput / 0.25;

    cout << (int)quarters << endl;
    changeConversion = moneyInput - ((int)quarters * 0.25);
    cout << changeConversion << endl;
    dimes = changeConversion / 0.10;

    changeConversion = changeConversion - ((int)dimes * 0.10);
    cout << changeConversion << endl;
    nickles = changeConversion / 0.05;

    cout << changeConversion << endl;
    cout << setprecision(0);
    cout << "That is " << (int)quarters << " quarters, " << (int)dimes << " dimes, " << (int)nickles << " nickles";
}

void tipConversion(){
    moneyTipTotal = moneyInput + (moneyInput * TIP);
    cout << "$" << moneyInput << " with a 15% tip will be $" << moneyTipTotal;
}

int main(){
    
    introduction();
    inputOptions();
    
    switch(optionChoice1){
        case 'a':
        case 'A':
            tipConversion();
        break;
        case 'b':
        case 'B':
            conversions();
    }

}