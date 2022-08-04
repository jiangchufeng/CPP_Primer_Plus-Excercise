// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    char c;     // c-存储输入的字符
    cin >> c;     // 输入字符
    // 请在Begin-End之间添加代码，输出 c 的 8 位二进制表示
    
    /********** Begin *********/
    /*
    该语句输出表达式(int)(bool)(c & 0x02)的值。该表达式有三个运算符：强制类
    型转换( int )、强制类型转换( bool )和按位与运算符 &。

    因为括号的原因，表达式先计算c & 0x02。0x02 是十六进制的02，其二进制表示
    为00000010 。将 c 和 0x02 进行按位与，除了第7位外，不需要管 c 的其它位
    是什么，因为 0x02 除了第7位，其它位都是0。那么就有，如果 c 的第7位如果是
    1，则按位与的结果就是 00000010，否则结果为 00000000。
    */
	cout << (int)(bool)(c & 0x80);
    cout << (int)(bool)(c & 0x40);
    cout << (int)(bool)(c & 0x20);
    cout << (int)(bool)(c & 0x10);
    cout << (int)(bool)(c & 0x08);
    cout << (int)(bool)(c & 0x04);
    cout << (int)(bool)(c & 0x02);
    cout << (int)(bool)(c & 0x01);
   
    
    /********** End **********/
    return 0;
}