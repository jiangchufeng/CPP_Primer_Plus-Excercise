// C++ Primer Plus Excercise
// Chapter 02

#include <iostream>
using namespace std;

int main()
{
    using namespace std;
    cout << "Enter the number of seconds:________\b\b\b\b\b\b\b\b";
    long sec;
    cin >> sec;
    const int Min_per_sec = 60;
    const int H_per_min = 60;
    const int D_per_h = 24;
    int s, d, h, min;
    s = sec % Min_per_sec;
    int convert;
    convert = sec / Min_per_sec;
    min = convert % H_per_min;
    convert = convert / H_per_min;
    h = convert % D_per_h;
    d = convert / D_per_h;
    cout << sec << " seconds = " << d << " days, " << h << " hours, " << min << " minutes, " << s << " seconds" << endl;
    system("pause");
    return 0;
}