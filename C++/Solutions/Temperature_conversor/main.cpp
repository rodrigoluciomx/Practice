#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

using namespace std; 

int main(){

    double temp;
    int operation;
    double finalTemp;

    cout << "What operation you want to do?" << endl;
    cout << "1 = Fahrenheit to Celsius" << endl;
    cout << "2 = Celsius to Fahrenhei" << endl;
    cout << "Type the number (1 or 2): " << endl;
    cin >> operation;

    switch (operation){
    case 1:
        cout << "OK! Let's convert Fahrenheit to Celsius" << endl;
        cout << "Please, enter the temperature in Fahrenheit: " << endl;
        cin >> temp;
        cout << "Converting ... " << endl;
        finalTemp = (temp - 32)/1.8;
        cout << temp << " in Fahrenheit is equal to: " << finalTemp << " Celsius" << endl;
        break;
    
    case 2:
        cout << "Great! Let's convert Celsius to Fahrenheit" << endl;
        cout << "Please, enter the temperature in Celsius: " << endl;
        cin >> temp;
        cout << "Converting ... " << endl;
        finalTemp = (temp * 1.8) + 32;
        cout << temp << " in Celsius is equal to: " << finalTemp << " Fahrenheit" << endl;
        break;

    default:
        cout << "That's not an option! Try again.";
        break;
    }

    return 0;
}