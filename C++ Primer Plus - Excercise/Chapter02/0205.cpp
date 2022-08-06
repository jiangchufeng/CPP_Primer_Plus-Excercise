// C++ Primer Plus Excercise
// Chapter 02

#include <iostream>
using namespace std;

double convert(double);

int main()
{
    cout << "Please enter a Celsius value: ";
    double degree;
    cin >> degree;
    double convertdegree1;
    convertdegree1 = convert(degree);
    cout << degree << " degrees Celsius is " << convertdegree1 << " degrees Fahrenheit." << endl;
    system("pause");
    return 0;
}

double convert(double degree)
{
    double convertdegree;
    convertdegree = 1.8 * degree + 32;
    return convertdegree;
}

