#include"stdio.h"
#include"conio.h"
#include"math.h"
int main ()
{
	int a,b,min,i ;
	printf(" Nhap a=");
	scanf("%d",&a);
	printf(" Nhap b=");
	scanf (" %d",&b);
	for(i=1;i<=a*b;i++)
	{	
	    if(i%a==0&&i%b==0)	    
		{
			min=i;	
			if(min>=i)
			min=i;
			break;
		}		
			
	}
	printf(" Boi chung nho nhat cua a va b la %d",min);
}	

