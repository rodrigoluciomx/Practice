#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    int numbers[2];
    int sum = 0;

    cout << "\n\n" << "Please, enter two numbers" << endl;
    cout << "First number: ";
    cin >> numbers[0];
    cout << "Second number: ";
    cin >> numbers[1];

    cout << "\n\n" << "Adding the two numbers ... " << "\n\n" << endl;
    sum = accumulate(begin(numbers), end(numbers), 0);
    
    cout << "The addition of the two numbers is: " << sum << "\n\n" << endl;

}