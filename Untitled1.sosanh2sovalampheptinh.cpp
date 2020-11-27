#include"stdio.h"
#include"conio.h"
#include"math.h"
int main ()
{
	int a,b;
	printf(" nhap a= ");
	scanf("%d",&a);
	printf(" nhap b = ");
	scanf("%d",&b);
	
	if(a<b)
	printf(" ket qua khi nhan 2 so la %d",a*b);
	else
	printf(" ket qua khi chia 2 so la %f",(float)a/b);
}	
