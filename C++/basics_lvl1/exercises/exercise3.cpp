#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    double sum, average;
    vector<double> numbers = {4.5, 6.7, 8.9, 9.10};
    sum = accumulate(numbers.begin(), numbers.end(), 0.0);
    average = sum / numbers.size();

    cout << "\n\n" << "This were the values of the vector..." 
         << "\n" << endl;
    
    for (const auto& i : numbers)
    {
        cout << i << " " ;
    }

    cout << "\n\n" 
         << "And the addition and average of the values are..." 
         << "\n\n" << endl;

    cout << "Average: " << average << endl;
    cout << "Addition: " << sum << endl;

    cout <<"\n\n";
    return 0;
}