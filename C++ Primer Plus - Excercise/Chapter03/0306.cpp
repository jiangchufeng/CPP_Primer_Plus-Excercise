// C++ Primer Plus Excercise
// Chapter 03

#include <iostream>
using namespace std;

int main()
{
    float mileage,gallon;
    cout<<"Please input your length of travel: ";
    cin>>mileage;
    cout<<"Enetr your litros: ";
    cin>>gallon;
    cout<<"Each gallon can run "<<mileage/gallon<<" miles"<<endl;
    cout<<"100 miles consume "<<gallon/mileage*100<<" gallon";
    system("pause");
}