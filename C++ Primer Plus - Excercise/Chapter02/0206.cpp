// C++ Primer Plus Excercise
// Chapter 02

#include <iostream>
using namespace std;

double convert(double);
 
int main()
{
    cout << "Enter the number of light years: ";
    double dist1;
    cin >> dist1;
    double dist2;
    dist2 = convert(dist1);
    cout << dist1 << " light years = " << dist2 << " astronomical units." << endl;
    system("pause");
    return 0;
}
 
double convert(double dist1)
{
    double dist2;
    dist2 = 63240 * dist1;
    return dist2;
}