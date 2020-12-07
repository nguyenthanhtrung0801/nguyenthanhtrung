#include"stdio.h"
#include"conio.h"
#include"math.h"
int main ()
{
	int a,b,max;
	printf(" Nhap a=");
	scanf("%d",&a);
	printf(" Nhap b=");
	scanf (" %d",&b);
	for(int i=1;i<=a,i<=b;i++)
	{
		if(a%i==0)
		{
			if(b%i==0)
			{
			if(max<i)
			max=i;
			}	
		}	
	}
	printf(" Uoc chung lon nhat cua a va b la %d",max);		
}	
	
	
