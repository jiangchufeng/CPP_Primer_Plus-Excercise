// C++ Primer Plus Excercise
// Chapter 02

#include <iostream>
using namespace std;

int main()
{
    using namespace std;
 
    cout << "Enter the world's population:__________\b\b\b\b\b\b\b\b\b\b";
    long long wp;
    cin >> wp;
    cout << "Enter the population of the US:__________\b\b\b\b\b\b\b\b\b\b";
    long long usp;
    cin >> usp;
    float rate;
    rate = float(usp) / float(wp) * 100;
    cout << "The population of the US is " << rate << "% of the world population." << endl;
    system("pause");
 
    return 0;
}