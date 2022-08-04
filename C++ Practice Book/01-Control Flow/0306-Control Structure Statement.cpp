// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    // 请在此添加代码，输入n和k，并输出n以内k个素数以及它们的和
    /********** Begin *********/

    int sum=0,count=0;  //sum为和，count用于记录查找到的个数 

	scanf("%d%d",&n,&k);

	for(int i=n;i>=2;i--)
    {  //第一重循环为查找素数的值，从n值开始 
		
        for(int j=2;j<i;j++) 
        {  //第二重循环为判断是否为素数 
			if(i%j==0) break;

			else
            {
				while(j==i-1) //可以遍历j从2增加至(i-1)来确定是否有因数
                {  //利用while确定素数 
					count++;    //对素数进行计数  
					
                    if(count<=k)
                    {  //判断素数个数 
						printf("%d ",i);
						sum=sum+i;
						break;
					}
					
					else{
						break;
					}
				}
			}
		}
		while(count<=k&&i==2)
        {  //特殊情况，当输入的值较小，k值较大时，需要使用值为2的素数 
			printf("%d ",i);
			sum=sum+i;
			break;
		}
		
		
	}
	printf("%d",sum);
    
    /********** End **********/

    return 0;
}