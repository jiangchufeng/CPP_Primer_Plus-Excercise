// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // n-输入的数，m-重排后的数
    int n, m;
    // 请在此添加代码，输入一个小于1000的正整数，重排出最大的数存入m中
    /********** Begin *********/
    while(scanf("%d",&n) !=EOF){
	    if(0<n && n<=9){ //如果输入的是1 digit number
	        m=n*100;//一位数一定这样最大
	    }
	    else if(10<=n && n<=99){ //如果输入的是2 digit number
	        int p=n%10;
	        int q=n/10;
	        if(p>=q)
	            m=p*100+q*10;
	        else
	            m=q*100+p*10;
	    }
	    else{ //如果输入的是3 digit number
	        int q=n/100;
	        int w=(n-q*100)/10;
	        int e=n%10; 
	        if(q>=w && w>=e)
	            m=q*100+w*10+e;
	        else if(q>=e && w<=e)
	            m=q*100+e*10+w;
	        else if(w>=q && q>=e)
	            m=w*100+q*10+e;
	        else if(w>=e && q<=e)
	            m=w*100+e*10+q;
	        else if(e>=w && w>=q)
	            m=e*100+w*10+q;
	        else
	            m=e*100+q*10+w;
	    }
  
    }
    /********** End **********/
    // 输出重排后的数
    cout << m << endl;
    return 0;
}