// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    // 请在此添加代码，输出整数进入黑洞过程
    /********** Begin *********/
    int a,b,c,max,min,num,trem;
	int max1,mid1,min1;

    scanf("%d",&n);

	for(num=1;n!=495;num++)
	{  
		if(n>=100)//三位数
		{
		/*通过各数位比较得到三个数大小以便进行重排*/
		 a=n/100;//分离
		 b=n/10%10;
		 c=n%10;

		    if(a<b)
		    {
		        trem=a;
		        a=b;
		        b=trem;	
		    }
		    if(a<c)
		    {
		 	    trem=a;
		 	    a=c;
		 	    c=trem;
		    }
		    if(b<c)
		    {
			    trem=b;
			    b=c;
			    c=trem;
		    }	 
		    max1=a;
            mid1=b;
            min1=c;	
        
            max=max1*100+mid1*10+min1;
	        min=min1*100+mid1*10+max1;
	    }
	    else if(n<10)
	    {
            max=n*100;
	        min=n;
	    }
	    else//两位数
	    {
		    a=n/10;b=n%10;
		    if(a>b)
		    {
			 max=a*100+b*10;
			 min=b*10+a;
		    }
		    else
		    {
			 max=b*100+a*10;
			 min=a*10+b;
		    }
	    }
	
        n=max-min;
        printf("%d:%d-%d=%d\n",num,max,min,n);
	    if(n==495)break;
	}

    
    /********** End **********/
    return 0;
}