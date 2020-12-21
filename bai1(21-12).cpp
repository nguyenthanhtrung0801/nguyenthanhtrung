#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,b,c;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	printf("Nhap c = ");
	scanf("%d",&c);
	
	if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)
	{
		printf("Chu vi cua tam giac = %d \n",a+b+c);
		float p=(float)(a+b+c)/2;
		float S=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Dien tich cua tam giac = %f ",S);
	}
	else
	printf("Day khong phai la 3 canh cua tam giac ");
}		
		
		
		
