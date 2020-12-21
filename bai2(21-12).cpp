#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>


void upperCase( char s[] )
{
	for( int i=0;i<strlen(s);i++)
	{
		if(s[i]>=97&&s[i]<=122)
		s[i]=s[i]-32;
	}
}		

int main()
{
	char s[20] ;
	printf(" Nhap chuoi :");
	
	gets(s);
	upperCase(s);
	printf("Chuoi viet hoa la : %s",s);
}	
	
