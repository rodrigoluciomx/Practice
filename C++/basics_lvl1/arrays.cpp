/*
Arrays are a collection of values of the same type, the size of the collection
can not be changed lately.

With vectors, with can solve that problem.

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // initializing simple arrays
    int number[4] = {1,2,3,4};
    cout << "\n\n" << "The first value of the array is: " << number[0] << endl;

    //using vectors
    vector<double> temperatures = {34.5, 27.8, 26.8};
    cout << "The first value of the vector is: " << temperatures.at(0) << endl;

    cout << "\n\n" <<"Changing the first value of the vector..." << "\n\n" << endl;
    temperatures.at(0) = 89.5;

    cout << "The new first value of the vector is: " <<temperatures.at(0) << endl;
    cout << "The size of the vector is: " << temperatures.size() << "\n\n" << endl;


}