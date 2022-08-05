// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;

    // 请在此添加代码，输入正整数n，如果n是素数则输出“Yes”，否则输出“No”
    /********** Begin *********/
   int m, sum = 0;
	cin >> n;

	if (n < 2)
		cout << "the number is not primer number / Ce nombre n'est pas prime\n" << endl;
	else 
	{
		for (int i = 2; i < n + 1; i ++)
		{
			m = n % i;
			if (m == 0)
				sum++;
		}
	}

	if (sum > 1)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;


    /********** End **********/

    return 0;
}