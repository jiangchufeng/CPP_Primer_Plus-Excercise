#include <iostream>

// 包含流操作算子库
#include <iomanip>
using namespace std;

// 定义常量PI，后面可以直接用PI代替后面的数值
#define PI 3.14159265358979323846

int main()
{
    int n;
    // 请在Begin-End之间添加你的代码，输入n，按不同的精度输出 PI。
    /********** Begin *********/
    cin >> n;
    /*
    流操纵算子 	功能描述
    setbase(b) 	以进制基数 b 为输出整数值
    setprecision(n) 	将浮点精度设置为 n
    setiosflags(long) 	设置特定的格式标志位
    setw(n) 	按照 n 个字符来读或者写
    setfill(ch) 	用 ch 填充空白字符
    flush 	刷新 ostream 缓冲区
    ends 	输出空字符
    endl 	输出换行符并刷新 ostream 缓冲区
    */
    
    cout << setiosflags(ios::fixed) << setprecision(n) << PI << endl;
    cout << setiosflags(ios::fixed) << setprecision(n+1) << PI << endl;
    cout << setiosflags(ios::fixed) << setprecision(n+2) << PI << endl;
    cout << setiosflags(ios::fixed) << setprecision(n+3) << PI << endl;
    cout << setiosflags(ios::fixed) << setprecision(n+4) << PI << endl;
    
    /********** End **********/
    return 0;
}
