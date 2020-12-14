#include"stdio.h"
#include"conio.h"
#include"math.h"
int main()
{
	int n,i,a ;
	printf(" nhap n =");
	scanf("%d",&n);
	
    int ary[n];
	for(i =0;i<n;i++)
	{
		printf(" nhap pt =");
		scanf("%d",&ary[i]);
	}
	
	for(i=n-1;i<=n;i--)
	{
		if(ary[i]%2!=0)
		{
			printf(" So le cuoi cung cua day la %d",ary[i]);
			break;
			
		}
	}
	if(ary[i]%2==0)
	printf(" khong co so le ");
}			
