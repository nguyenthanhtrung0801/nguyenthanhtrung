#include"stdio.h"
#include"conio.h"
#include"math.h"
int main()
{
	int n,i,min ;
	printf(" nhap n =");
	scanf("%d",&n);
	
    int ary[n];
	for(i =0;i<n;i++)
	{
		printf(" nhap pt =");
		scanf("%d",&ary[i]);
	}
	
	for(int i =0;i<n;i++)
	{
	if(ary[i]>=0)
	{
		if(min>ary[i])
		min=ary[i];  	 	
	}
	else
	min=ary[i];  
	}
	if(min<0)
	printf(" Khong co so duong ");
	else
	printf(" So duong nho nhat la %d", min);
}		
		
	
