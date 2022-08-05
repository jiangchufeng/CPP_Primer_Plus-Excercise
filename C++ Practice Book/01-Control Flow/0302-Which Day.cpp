// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // y-年，m-月,d-日，n-第几天
    int y, m, d, n;
    // 请在此添加代码，计算并输出指定日期是第几天
    /********** Begin *********/
	scanf("%d %d %d", &y, &m, &d);
	if (((y % 4) == 0 && (y % 100) != 0) || (y % 400 == 0))
	{
		switch(m)
		{
			case 1:
				n = d;
				break;
			case 2:
				n = 31 + d;
				break;
			case 3:
				n = 60 + d;
				break;
			case 4:
				n = 91 + d;
				break;
			case 5:
				n = 121 + d;
				break;
			case 6:
				n = 152 + d;
				break;
			case 7:
				n = 182 + d;
				break;
			case 8:
				n = 213 + d;
				break;
			case 9:
				n = 244 + d;
				break;
			case 10:
				n = 274 + d;
				break;
			case 11:
				n = 305 + d;
				break;
			case 12:
				n = 335 + d;
				break;
		}
	}
	else
	{
		switch(m)
		{
			case 1:
				n = d;
				break;
			case 2:
				n = 31 + d;
				break;
			case 3:
				n = 59 + d;
				break;
			case 4:
				n = 90 + d;
				break;
			case 5:
				n = 120 + d;
				break;
			case 6:
				n = 151 + d;
				break;
			case 7:
				n = 181 + d;
				break;
			case 8:
				n = 212 + d;
				break;
			case 9:
				n = 243 + d;
			case 10:
				n = 273 + d;
				break;
			case 11:
				n = 304 + d;
				break;
			case 12:
				n = 334 + d;
				break;
		}
	}
   
    /********** End **********/
    printf("%d-%d-%d是第%d天\n",y,m,d,n);
    return 0;
}