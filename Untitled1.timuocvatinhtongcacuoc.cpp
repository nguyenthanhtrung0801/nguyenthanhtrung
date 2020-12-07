#include"stdio.h"
#include"conio.h"
#include"math.h"
int main ()
{
	int n;

	printf(" Nhap n =");
	scanf("%d",&n);
	int S,i,m;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		printf(" Uoc cua so vua nhap la %d \n",i);
		S=S+i;
		}
	}
	printf(" Tong cac uoc cua %d la %d",n,S);
    
}	
		
