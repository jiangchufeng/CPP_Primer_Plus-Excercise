// 包含标准输入输出函数库
#include <stdio.h>

// 定义main函数
int main()
{
    float up, low;
    // 请在Begin-End之间添加代码，计算标准身材的体重上下限
    /********** Begin *********/
	float a, b;
    scanf("%f",&a);
    b = (a - 100) * 0.9;
    low = b * 0.9;
    up = b * 1.1;
    
    
    /********** End **********/
    // 输出标准身材的体重上下限
    printf("体重范围为：%.2f -- %.2f\n",low,up);
    return 0;
}